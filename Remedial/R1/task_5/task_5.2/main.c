#include "header.h"

int main() {

    int *arr;
    int size = SIZE;

    arr = MALLOC(size, int);
    initialize_memory(arr, size);
    printf("Printing the array\n ");
    show_memory(arr, size);

    size *= 2;
    arr = REALLOC(arr, size, int);
    initialize_memory(arr + SIZE, SIZE);
    printf("Printing the array after resizing\n ");
    show_memory(arr, size);

    free(arr);
    return EXIT_SUCCESS;
}
