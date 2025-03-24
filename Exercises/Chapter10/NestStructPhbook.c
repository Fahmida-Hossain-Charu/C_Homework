#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

struct address {
    char street[40];
    char city[40];
    char state[3];
    char zip[12];
};

struct phone_type {
    char name[40];
    int areacode;
    char number[9];
    struct address addr;
} phone[MAX];

int loc = 0;

int menu(void);
void enter(void);
void load(void);
void save(void);
void find(void);

int main(void)
{
    int choice;

    do {
        choice = menu();
        switch(choice) {
            case 1: enter();
                    break;
            case 2: find();
                    break;
            case 3: save();
                    break;
            case 4: load();
        }
    } while(choice != 5);

    return 0;
}

/* Get menu choice. */
int menu(void)
{
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
    } while(i < 1 || i > 5);
    return i;
}

void enter(void)
{
    char temp[80];

    for(; loc < MAX; loc++) {
        printf("Enter name: ");
        gets(phone[loc].name);
        if(!*phone[loc].name) break;
        
        printf("Enter area code: ");
        gets(temp);
        phone[loc].areacode = atoi(temp);
        
        printf("Enter number: ");
        gets(phone[loc].number);

        /* input address info */
        printf("Enter street address: ");
        gets(phone[loc].addr.street);
        printf("Enter city: ");
        gets(phone[loc].addr.city);
        printf("Enter State: ");
        gets(phone[loc].addr.state);
        printf("Enter zip code: ");
        gets(phone[loc].addr.zip);
    }
}

void find(void)
{
    char name[80];
    int i;

    printf("Enter name: ");
    gets(name);
    if(!*name) return;

    for(i = 0; i < loc; i++) {
        if(!strcmp(name, phone[i].name)) {
            printf("%s (%d) %s\n", phone[i].name,
                   phone[i].areacode, phone[i].number);
            printf("%s\n%s %s %s\n", phone[i].addr.street,
                   phone[i].addr.city, phone[i].addr.state,
                   phone[i].addr.zip);
        }
    }
}

void load(void)
{
    FILE *fp;

    if((fp = fopen("phone.dat", "rb")) == NULL) {
        printf("Cannot open file.\n");
        return;
    }

    loc = 0;
    while(!feof(fp)) {
        if(fread(&phone[loc], sizeof(struct phone_type), 1, fp) != 1)
            break;
        loc++;
    }
    fclose(fp);
}

void save(void)
{
    FILE *fp;
    int i;

    if((fp = fopen("phone.dat", "wb")) == NULL) {
        printf("Cannot open file.\n");
        return;
    }

    for(i = 0; i < loc; i++) {
        if(fwrite(&phone[i], sizeof(struct phone_type), 1, fp) != 1) {
            printf("File write error.\n");
            break;
        }
    }
    fclose(fp);
}