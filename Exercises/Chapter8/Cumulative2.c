#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Function prototypes
int menu(void);
void enter(void);
void author_search(void);
void title_search(void);
void display(int i);

// Global arrays to store book details
char names[MAX][80]; // author names
char titles[MAX][80]; // book titles
char pubs[MAX][80]; // publishers
int top = 0; // number of books entered

int main(void)
{
    int choice;

    do {
        choice = menu(); // Display menu and get user choice
        switch(choice) {
            case 1: enter(); // Enter books
                    break;
            case 2: author_search(); // Search by author
                    break;
            case 3: title_search(); // Search by title
                    break;
            case 4: printf("Exiting program.\n");
                    break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while(choice != 4);

    return 0;
}

// Function to display the menu and get user choice
int menu(void)
{
    char str[80];
    int i;

    printf("\nCard Catalog:\n");
    printf("1. Enter\n");
    printf("2. Search by Author\n");
    printf("3. Search by Title\n");
    printf("4. Quit\n");

    do {
        printf("Choose your selection: ");
        gets(str);
        i = atoi(str);
    } while(i < 1 || i > 4);

    return i;
}

// Function to enter book details
void enter(void)
{
    int i;

    for(i = top; i < MAX; i++) {
        printf("Enter author name (ENTER to quit): ");
        gets(names[i]);
        if(!names[i][0]) break; // Exit if blank line is entered

        printf("Enter title: ");
        gets(titles[i]);

        printf("Enter publisher: ");
        gets(pubs[i]);

        printf("\n");
    }
    top = i; // Update the number of books entered
}

// Function to search books by author
void author_search(void)
{
    char name[80];
    int i, found;

    printf("Enter author name to search: ");
    gets(name);

    found = 0;
    for(i = 0; i < top; i++) {
        if(!strcmp(name, names[i])) {
            display(i); // Display book details
            found = 1;
        }
    }
    if(!found) printf("Not Found\n");
}

// Function to search books by title
void title_search(void)
{
    char title[80];
    int i, found;

    printf("Enter title to search: ");
    gets(title);

    found = 0;
    for(i = 0; i < top; i++) {
        if(!strcmp(title, titles[i])) {
            display(i); // Display book details
            found = 1;
        }
    }
    if(!found) printf("Not Found\n");
}

// Function to display book details
void display(int i)
{
    printf("\nTitle: %s\n", titles[i]);
    printf("Author: %s\n", names[i]);
    printf("Publisher: %s\n", pubs[i]);
    printf("\n");
}
