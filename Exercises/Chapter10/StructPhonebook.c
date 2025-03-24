#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// Structure to hold phone book entries
struct phone_type {
    char name[40];
    int areacode;
    char number[9];
} phone[MAX];

int loc = 0; // Tracks the number of entries in the phone book

// Function prototypes
int menu(void);
void enter(void);
void find(void);
void save(void);
void load(void);

int main(void) {
    int choice;

    do {
        choice = menu();
        switch (choice) {
            case 1: enter(); break;
            case 2: find(); break;
            case 3: save(); break;
            case 4: load(); break;
        }
    } while (choice != 5);

    return 0;
}

/* Display menu and get user choice. */
int menu(void) {
    int i;
    char str[80];

    printf("1. Enter names and numbers\n");
    printf("2. Find numbers\n");
    printf("3. Save directory to disk\n");
    printf("4. Load directory from disk\n");
    printf("5. Quit\n");

    do {
        printf("Enter your choice: ");
        gets(str);
        i = atoi(str);
        printf("\n");
    } while (i < 1 || i > 5);

    return i;
}

/* Enter new phone book entries. */
void enter(void) {
    char temp[80];

    for (; loc < MAX; loc++) {
        printf("Enter name: ");
        gets(phone[loc].name);
        if (!*phone[loc].name) break; // Exit if no name is entered

        printf("Enter area code: ");
        gets(temp);
        phone[loc].areacode = atoi(temp);

        printf("Enter number: ");
        gets(phone[loc].number);
    }
}

/* Find a phone book entry by name. */
void find(void) {
    char name[80];
    int i;

    printf("Enter name: ");
    gets(name);
    if (!*name) return; // Exit if no name is entered

    for (i = 0; i < loc; i++) {
        if (!strcmp(name, phone[i].name)) {
            printf("%s (%d) %s\n", phone[i].name, phone[i].areacode, phone[i].number);
        }
    }
}

/* Save the phone book to a file. */
void save(void) {
    FILE *fp;
    int i;

    if ((fp = fopen("phone.dat", "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    for (i = 0; i < loc; i++) {
        fprintf(fp, "%s %d %s\n", phone[i].name, phone[i].areacode, phone[i].number);
    }

    fclose(fp);
    printf("Phone book saved successfully.\n");
}

/* Load the phone book from a file. */
void load(void) {
    FILE *fp;

    if ((fp = fopen("phone.dat", "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    loc = 0;
    while (!feof(fp) && loc < MAX) {
        fscanf(fp, "%s %d %s", phone[loc].name, &phone[loc].areacode, phone[loc].number);
        loc++;
    }

    fclose(fp);
    printf("Phone book loaded successfully.\n");
}
