#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book library[3];
    int i;
    int search_id;
    int found = 0;

    // Hardcoding 3 books for data setup
    library[0].id = 101;
    strcpy(library[0].title, "C Programming");
    
    library[1].id = 102;
    strcpy(library[1].title, "Data Structures");
    
    library[2].id = 103;
    strcpy(library[2].title, "Open Source Guide");

    printf("--- Library Search Tool ---\n");
    printf("Enter Book ID to search (Try 101, 102, 103): ");
    scanf("%d", &search_id);

    for(i = 0; i < 3; i++) {
        if(library[i].id == search_id) {
            printf("\nBook Found!\n");
            printf("ID: %d\nTitle: %s\n", library[i].id, library[i].title);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("\nBook with ID %d not found in library.\n", search_id);
    }

    return 0;
}