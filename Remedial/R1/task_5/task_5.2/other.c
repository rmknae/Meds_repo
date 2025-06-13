#include "header.h"
#undef malloc
#undef realloc

void *alloc(size_t size) {
    void *mempool = malloc(size);
    if (mempool != NULL) return mempool;
    printf("Out of memory");
    exit(EXIT_FAILURE);
}

void *resize(void *ptr, size_t size) {
    void *resized = realloc(ptr, size);
    if (resized != NULL) return resized;
    printf("Reallocation failed");
    exit(EXIT_FAILURE);
}

void initialize_memory(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void show_memory(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}