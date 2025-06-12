#include <stdio.h>
#include <stdbool.h> 

// structure Book
typedef struct Book {
    char title[100];
    char author[100];
    char ISBN[20];
    int publication_year;
    char genre[50];
    int available_copies;
} Book;

// Printing Details
static inline void print_book_details(Book *ptr) {
    printf("Title: %s\nAuthor: %s\nISBN: %s\nYear: %d\nGenre: %s\nAvailable Copies: %d\n\n",
           ptr->title,
           ptr->author,
           ptr->ISBN,
           ptr->publication_year,
           ptr->genre,
           ptr->available_copies);
}


// Check Availability
static inline bool is_book_available(Book *ptr) {
    return (ptr->available_copies != 0);
}

int main() {
    // First book (available)
    Book myBook = {
        "1984",
        "George Orwell",
        "9780451524935",
        1949,
        "Dystopian Fiction",
        3
    };

    // Second book (not available)
    Book secondBook = {
        "Brave New World",
        "Aldous Huxley",
        "9780060850524",
        1932,
        "Science Fiction",
        0
    };

    // Test case 1
    print_book_details(&myBook);
    if (is_book_available(&myBook)) {
        printf("Copies of this book are available.\n\n");
    } else {
        printf("No copies of this book are available.\n\n");
    }

    // Test case 2
    print_book_details(&secondBook);
    if (is_book_available(&secondBook)) {
        printf("Copies of this book are available.\n");
    } else {
        printf("No copies of this book are available.\n");
    }

    return 0;
}
