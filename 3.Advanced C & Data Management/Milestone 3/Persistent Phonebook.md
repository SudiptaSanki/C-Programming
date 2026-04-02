# Milestone 3: Persistent Phonebook

This is the Phase 3 capstone project.

Goal: Build a contact management program that uses structs, dynamic memory, and binary file storage together.

---

## 1. Project Requirements

Your program should show a menu and let the user choose operations repeatedly until exit.

Minimum features:

1. Add contact
2. View all contacts
3. Search contact
4. Delete contact
5. Save and exit

---

## 2. Suggested Program Structure

Start with one file first:

- `persistent_phonebook.c`

If you want to refactor later, split into:

- `main.c`
- `contact_utils.c`
- `contact_utils.h`
- `file_utils.c`

---

## 3. Recommended Menu Flow

```text
===== Persistent Phonebook =====
1. Add Contact
2. View Contacts
3. Search Contact
4. Delete Contact
5. Save and Exit
Enter choice:
```

---

## 4. Constraints

- Use a `Contact` struct with Name, Phone, and Email.
- Store contacts in a dynamic array of pointers.
- Grow the array using `realloc` when needed.
- Save all contacts to `contacts.dat` in binary form.
- Load contacts from `contacts.dat` when the program starts.

---

## 5. Logic Notes

- Use `malloc` to create each new contact record.
- Use `realloc` to grow the pointer array when capacity is full.
- Save the contact count first in the binary file, then save every struct.
- On delete, free the removed contact and shift remaining pointers left.

---

## 6. Testing Checklist

- Empty phonebook loads correctly.
- Adding contacts grows storage correctly.
- Search works for existing and missing names.
- Delete removes the correct contact.
- Contacts remain available after restarting the program.

---

## 7. Evaluation Rubric

- Correctness: 45%
- Dynamic memory usage: 25%
- File handling: 20%
- Menu flow and clarity: 10%

---

## 8. Completion Definition

Milestone 3 is complete when:

- Contacts are stored in a dynamic array of pointers.
- Data is saved to and restored from `contacts.dat`.
- Add, view, search, and delete all work correctly.
- The program exits only after saving data successfully.

After this milestone, you will be ready for even larger multi-file C programs.
