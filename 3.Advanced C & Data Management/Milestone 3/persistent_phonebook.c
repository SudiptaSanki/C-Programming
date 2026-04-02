#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_SIZE 50
#define PHONE_SIZE 20
#define EMAIL_SIZE 60
#define DATA_FILE "contacts.dat"

typedef struct {
    char name[NAME_SIZE];
    char phone[PHONE_SIZE];
    char email[EMAIL_SIZE];
} Contact;

void trim_newline(char *text) {
    while (*text != '\0') {
        if (*text == '\n') {
            *text = '\0';
            return;
        }
        text++;
    }
}

void read_line(const char *prompt, char *buffer, size_t size) {
    printf("%s", prompt);

    if (fgets(buffer, (int) size, stdin) == NULL) {
        buffer[0] = '\0';
        return;
    }

    trim_newline(buffer);
}

int read_menu_choice(void) {
    char line[32];
    char *end_ptr;
    long value;

    read_line("Enter choice: ", line, sizeof(line));
    value = strtol(line, &end_ptr, 10);

    if (line[0] == '\0' || *end_ptr != '\0') {
        return -1;
    }

    return (int) value;
}

int ensure_capacity(Contact ***contacts, size_t *capacity, size_t count) {
    Contact **temp;
    size_t new_capacity;

    if (count < *capacity) {
        return 1;
    }

    new_capacity = (*capacity == 0) ? 2 : (*capacity * 2);
    temp = realloc(*contacts, new_capacity * sizeof(Contact *));
    if (temp == NULL) {
        return 0;
    }

    *contacts = temp;
    *capacity = new_capacity;
    return 1;
}

void add_contact(Contact ***contacts, size_t *count, size_t *capacity) {
    Contact *contact;

    if (!ensure_capacity(contacts, capacity, *count)) {
        printf("Unable to grow contact list.\n");
        return;
    }

    contact = malloc(sizeof(Contact));
    if (contact == NULL) {
        printf("Unable to allocate memory for contact.\n");
        return;
    }

    read_line("Enter name: ", contact->name, sizeof(contact->name));
    read_line("Enter phone: ", contact->phone, sizeof(contact->phone));
    read_line("Enter email: ", contact->email, sizeof(contact->email));

    (*contacts)[*count] = contact;
    (*count)++;
    printf("Contact added successfully.\n");
}

void view_contacts(Contact **contacts, size_t count) {
    size_t i;

    if (count == 0) {
        printf("No contacts available.\n");
        return;
    }

    for (i = 0; i < count; i++) {
        printf("\nContact %zu\n", i + 1);
        printf("Name : %s\n", contacts[i]->name);
        printf("Phone: %s\n", contacts[i]->phone);
        printf("Email: %s\n", contacts[i]->email);
    }
}

void search_contact(Contact **contacts, size_t count) {
    char keyword[NAME_SIZE];
    size_t i;
    int found = 0;

    if (count == 0) {
        printf("No contacts available.\n");
        return;
    }

    read_line("Enter name to search: ", keyword, sizeof(keyword));

    for (i = 0; i < count; i++) {
        if (strstr(contacts[i]->name, keyword) != NULL) {
            printf("\nFound Contact\n");
            printf("Name : %s\n", contacts[i]->name);
            printf("Phone: %s\n", contacts[i]->phone);
            printf("Email: %s\n", contacts[i]->email);
            found = 1;
        }
    }

    if (!found) {
        printf("No contact matched your search.\n");
    }
}

void delete_contact(Contact ***contacts, size_t *count) {
    char keyword[NAME_SIZE];
    size_t i;
    size_t j;

    if (*count == 0) {
        printf("No contacts available.\n");
        return;
    }

    read_line("Enter exact name to delete: ", keyword, sizeof(keyword));

    for (i = 0; i < *count; i++) {
        if (strcmp((*contacts)[i]->name, keyword) == 0) {
            free((*contacts)[i]);

            for (j = i; j + 1 < *count; j++) {
                (*contacts)[j] = (*contacts)[j + 1];
            }

            (*count)--;
            printf("Contact deleted successfully.\n");
            return;
        }
    }

    printf("Contact not found.\n");
}

int save_contacts(Contact **contacts, size_t count) {
    FILE *file = fopen(DATA_FILE, "wb");
    size_t i;

    if (file == NULL) {
        printf("Unable to open %s for saving.\n", DATA_FILE);
        return 0;
    }

    if (fwrite(&count, sizeof(size_t), 1, file) != 1) {
        fclose(file);
        return 0;
    }

    for (i = 0; i < count; i++) {
        if (fwrite(contacts[i], sizeof(Contact), 1, file) != 1) {
            fclose(file);
            return 0;
        }
    }

    fclose(file);
    return 1;
}

int load_contacts(Contact ***contacts, size_t *count, size_t *capacity) {
    FILE *file = fopen(DATA_FILE, "rb");
    size_t saved_count;
    size_t i;

    if (file == NULL) {
        return 1;
    }

    if (fread(&saved_count, sizeof(size_t), 1, file) != 1) {
        fclose(file);
        return 0;
    }

    for (i = 0; i < saved_count; i++) {
        Contact *contact;

        if (!ensure_capacity(contacts, capacity, *count)) {
            fclose(file);
            return 0;
        }

        contact = malloc(sizeof(Contact));
        if (contact == NULL) {
            fclose(file);
            return 0;
        }

        if (fread(contact, sizeof(Contact), 1, file) != 1) {
            free(contact);
            fclose(file);
            return 0;
        }

        (*contacts)[*count] = contact;
        (*count)++;
    }

    fclose(file);
    return 1;
}

void free_contacts(Contact **contacts, size_t count) {
    size_t i;

    for (i = 0; i < count; i++) {
        free(contacts[i]);
    }

    free(contacts);
}

void show_menu(void) {
    printf("\n===== Persistent Phonebook =====\n");
    printf("1. Add Contact\n");
    printf("2. View Contacts\n");
    printf("3. Search Contact\n");
    printf("4. Delete Contact\n");
    printf("5. Save and Exit\n");
}

int main(void) {
    Contact **contacts = NULL;
    size_t count = 0;
    size_t capacity = 0;
    int choice;

    if (!load_contacts(&contacts, &count, &capacity)) {
        printf("Warning: existing contacts could not be loaded correctly.\n");
    }

    do {
        show_menu();
        choice = read_menu_choice();

        switch (choice) {
            case 1:
                add_contact(&contacts, &count, &capacity);
                break;
            case 2:
                view_contacts(contacts, count);
                break;
            case 3:
                search_contact(contacts, count);
                break;
            case 4:
                delete_contact(&contacts, &count);
                break;
            case 5:
                if (save_contacts(contacts, count)) {
                    printf("Contacts saved successfully.\n");
                } else {
                    printf("Failed to save contacts.\n");
                }
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    free_contacts(contacts, count);
    return 0;
}
