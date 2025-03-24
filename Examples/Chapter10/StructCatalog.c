#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure to hold book details
struct catalog {
    char name[80];      // Author name
    char title[80];     // Book title
    char pub[80];       // Publisher
    unsigned int date;  // Copyright date
    unsigned char ed;   // Edition
} cat[MAX];

int top = 0; // Tracks the number of books in the catalog

// Function prototypes
void display(int i);
void load(void);
void save(void);
void enter(void);
void author_search(void);
void title_search(void);
int menu(void);

int main(void) {
    int choice;

    load(); // Load the catalog from file

    while ((choice = menu()) != 5) {
        switch (choice) {
            case 1: enter(); break;
            case 2: author_search(); break;
            case 3: title_search(); break;
            case 4: save(); break;
        }
    }

    return 0;
}

/* Display catalog entry. */
void display(int i) {
    printf("Title: %s\n", cat[i].title);
    printf("Author: %s\n", cat[i].name);
    printf("Publisher: %s\n", cat[i].pub);
    printf("Copyright: %u, Edition: %u\n\n", cat[i].date, cat[i].ed);
}

/* Load the catalog from a file. */
void load(void) {
    FILE *fp;

    if ((fp = fopen("catalog.dat", "rb")) == NULL) {
        printf("Catalog file not found. Starting with an empty catalog.\n");
        return;
    }

    // Read the number of books
    if (fread(&top, sizeof(top), 1, fp) != 1) {
        printf("Error reading catalog count.\n");
        exit(1);
    }

    // Read the catalog data
    if (fread(cat, sizeof(struct catalog), top, fp) != top) {
        printf("Error reading catalog data.\n");
        exit(1);
    }

    fclose(fp);
    printf("Catalog loaded successfully.\n");
}

/* Save the catalog to a file. */
void save(void) {
    FILE *fp;

    if ((fp = fopen("catalog.dat", "wb")) == NULL) {
        printf("Cannot open catalog file for writing.\n");
        exit(1);
    }

    // Write the number of books
    if (fwrite(&top, sizeof(top), 1, fp) != 1) {
        printf("Error writing catalog count.\n");
        exit(1);
    }

    // Write the catalog data
    if (fwrite(cat, sizeof(struct catalog), top, fp) != top) {
        printf("Error writing catalog data.\n");
        exit(1);
    }

    fclose(fp);
    printf("Catalog saved successfully.\n");
}

/* Enter new books into the catalog. */
void enter(void) {
    char temp[80];

    if (top >= MAX) {
        printf("Catalog is full. Cannot add more books.\n");
        return;
    }

    printf("Enter author name (ENTER to quit): ");
    gets(cat[top].name);
    if (!*cat[top].name) return; // Exit if no name is entered

    printf("Enter title: ");
    gets(cat[top].title);

    printf("Enter publisher: ");
    gets(cat[top].pub);

    printf("Enter copyright date: ");
    gets(temp);
    cat[top].date = (unsigned)atoi(temp);

    printf("Enter edition: ");
    gets(temp);
    cat[top].ed = (unsigned char)atoi(temp);

    top++; // Increment the number of books
    printf("Book added successfully.\n\n");
}

/* Search for books by author. */
void author_search(void) {
    char name[80];
    int i, found = 0;

    printf("Enter author name to search: ");
    gets(name);

    for (i = 0; i < top; i++) {
        if (strcmp(name, cat[i].name) == 0) {
            display(i);
            found = 1;
        }
    }

    if (!found) printf("No books found for author: %s\n\n", name);
}

/* Search for books by title. */
void title_search(void) {
    char title[80];
    int i, found = 0;

    printf("Enter title to search: ");
    gets(title);

    for (i = 0; i < top; i++) {
        if (strcmp(title, cat[i].title) == 0) {
            display(i);
            found = 1;
        }
    }

    if (!found) printf("No books found with title: %s\n\n", title);
}

/* Display the menu and get user choice. */
int menu(void) {
    int choice;
    char str[80];

    printf("Card Catalog System\n");
    printf("1. Enter a new book\n");
    printf("2. Search by author\n");
    printf("3. Search by title\n");
    printf("4. Save catalog\n");
    printf("5. Quit\n");

    do {
        printf("Choose your selection: ");
        gets(str);
        choice = atoi(str);
    } while (choice < 1 || choice > 5);

    return choice;
}