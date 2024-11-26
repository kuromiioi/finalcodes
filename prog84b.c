#include <stdio.h>

// Structure to hold book information
struct Book {
    char title[100];
    char author[100];
    float price;
};

// Function to read book information using a pointer to a structure
void readBookInfo(struct Book *b) {
    printf("Enter book title: ");
    getchar(); // To consume the newline character left by previous input
    fgets(b->title, sizeof(b->title), stdin);
    
    printf("Enter author name: ");
    fgets(b->author, sizeof(b->author), stdin);
    
    printf("Enter price of the book: ");
    scanf("%f", &b->price);
}

// Function to display book information using a pointer to a structure
void displayBookInfo(struct Book *b) {
    printf("\nBook Information:\n");
    printf("Title: %s", b->title);
    printf("Author: %s", b->author);
    printf("Price: %.2f\n", b->price);
}

int main() {
    struct Book myBook; // Create a Book structure instance

    // Read book information
    readBookInfo(&myBook);

    // Display book information
    displayBookInfo(&myBook);

    return 0;
}
