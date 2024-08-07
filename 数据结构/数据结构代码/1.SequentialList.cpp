#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define the structure for the sequential list
typedef struct {
    int data[MAX_SIZE];
    int length;
} SeqList;

// Initialize the sequential list
void init(SeqList *list) {
    list->length = 0;
}

// Insert an element at a specified position
bool insert(SeqList *list, int position, int element) {
    if (position < 0 || position > list->length || list->length == MAX_SIZE) {
        return false;
    }

    for (int i = list->length - 1; i >= position; i--) {
        list->data[i + 1] = list->data[i];
    }

    list->data[position] = element;
    list->length++;

    return true;
}

// Delete an element at a specified position
bool removeAt(SeqList *list, int position) {
    if (position < 0 || position >= list->length) {
        return false;
    }

    for (int i = position; i < list->length - 1; i++) {
        list->data[i] = list->data[i + 1];
    }

    list->length--;

    return true;
}

// Search for an element and return its position
int search(SeqList *list, int element) {
    for (int i = 0; i < list->length; i++) {
        if (list->data[i] == element) {
            return i;
        }
    }

    return -1; // Element not found
}

// Modify an element at a specified position
bool modify(SeqList *list, int position, int newElement) {
    if (position < 0 || position >= list->length) {
        return false;
    }

    list->data[position] = newElement;

    return true;
}

// Display the elements of the sequential list
void display(SeqList *list) {
    printf("Sequential List: ");
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    SeqList list;
    init(&list);

    insert(&list, 0, 1);
    insert(&list, 1, 2);
    insert(&list, 2, 3);
    insert(&list, 3, 4);
    insert(&list, 2, 5); // Inserting 5 at position 2

    display(&list); // Output: Sequential List: 1 2 5 3 4

    removeAt(&list, 1); // Removing element at position 1

    display(&list); // Output: Sequential List: 1 5 3 4

    int position = search(&list, 3);
    if (position != -1) {
        printf("Element 3 found at position: %d\n", position);
    } else {
        printf("Element not found.\n");
    }

    modify(&list, 0, 10); // Modifying element at position 0 to 10

    display(&list); // Output: Sequential List: 10 5 3 4

    return 0;
}
