#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100  // Maximum number of books in catalog

// Inner structure for book mechanical info
struct book_type {
    unsigned date;    /* copyright date */
    unsigned char ed; /* edition */
    unsigned pages;   /* number of pages */
};

// Outer catalog structure
struct catalog {
    char name[80];     /* author name */
    char title[80];    /* book title */
    char pub[80];      /* publisher */
    struct book_type book; /* nested book info */
} cat[MAX];

int top = 0;  // Tracks the next available catalog slot

// Function prototypes
int menu(void);
void enter(void);
void author_search(void);
void title_search(void);
void display(int i);
void save(void);
void load(void);

int main(void) {
    int choice;

    load(); // Load existing catalog data

    do {
        choice = menu();
        switch(choice) {
            case 1: enter(); break;
            case 2: author_search(); break;
            case 3: title_search(); break;
            case 4: save(); break;
            case 5: break; // Exit
            default: printf("Invalid choice.\n");
        }
    } while(choice != 5);

    return 0;
}

// Display menu and get user choice
int menu(void) {
    int i;
    char str[80];

    printf("\nCard Catalog:\n");
    printf("1. Enter\n");
    printf("2. Search by Author\n");
    printf("3. Search by Title\n");
    printf("4. Save Catalog\n");
    printf("5. Quit\n");

    do {
        printf("Choose your selection: ");
        gets(str);
        i = atoi(str);
    } while(i < 1 || i > 5);

    return i;
}

// Add new books to catalog
void enter(void) {
    int i;
    char temp[80];

    for(i = top; i < MAX; i++) {
        printf("\nEnter author name (ENTER to quit): ");
        gets(cat[i].name);
        if(!*cat[i].name) break;

        printf("Enter title: ");
        gets(cat[i].title);

        printf("Enter publisher: ");
        gets(cat[i].pub);

        printf("Enter copyright date: ");
        gets(temp);
        cat[i].book.date = (unsigned)atoi(temp);

        printf("Enter edition: ");
        gets(temp);
        cat[i].book.ed = (unsigned char)atoi(temp);

        printf("Enter number of pages: ");
        gets(temp);
        cat[i].book.pages = (unsigned)atoi(temp);
    }
    top = i;
}

// Search by author
void author_search(void) {
    char name[80];
    int i, found = 0;

    printf("\nAuthor name: ");
    gets(name);

    for(i = 0; i < top; i++) {
        if(!strcmp(name, cat[i].name)) {
            display(i);
            found = 1;
            printf("\n");
        }
    }
    if(!found) printf("Not Found\n");
}

// Search by title
void title_search(void) {
    char title[80];
    int i, found = 0;

    printf("\nTitle: ");
    gets(title);

    for(i = 0; i < top; i++) {
        if(!strcmp(title, cat[i].title)) {
            display(i);
            found = 1;
            printf("\n");
        }
    }
    if(!found) printf("Not Found\n");
}

// Display book details
void display(int i) {
    printf("\nTitle: %s\n", cat[i].title);
    printf("Author: %s\n", cat[i].name);
    printf("Publisher: %s\n", cat[i].pub);
    printf("Copyright: %u, Edition: %u\n", cat[i].book.date, cat[i].book.ed);
    printf("Pages: %u\n", cat[i].book.pages);
}

// Save catalog to file
void save(void) {
    FILE *fp;

    if((fp = fopen("catalog.dat", "wb")) == NULL) {
        printf("Cannot open catalog file.\n");
        exit(1);
    }

    if(fwrite(&top, sizeof(top), 1, fp) != 1) {
        printf("Error writing count.\n");
        exit(1);
    }

    if(fwrite(cat, sizeof(struct catalog), top, fp) != top) {
        printf("Error writing catalog data.\n");
        exit(1);
    }

    fclose(fp);
    printf("Catalog saved successfully.\n");
}

// Load catalog from file
void load(void) {
    FILE *fp;

    if((fp = fopen("catalog.dat", "rb")) == NULL) {
        printf("No existing catalog file. Starting fresh.\n");
        return;
    }

    if(fread(&top, sizeof(top), 1, fp) != 1) {
        printf("Error reading count.\n");
        exit(1);
    }

    if(fread(cat, sizeof(struct catalog), top, fp) != top) {
        printf("Error reading catalog data.\n");
        exit(1);
    }

    fclose(fp);
    printf("Catalog loaded successfully.\n");
}