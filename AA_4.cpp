#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    int index;
    printf("Enter the index to insert the element: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Invalid index. Insertion failed.\n");
    } else {
        
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = element;
        size++;  

        printf("Element %d inserted successfully.\n", element);
    }

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
