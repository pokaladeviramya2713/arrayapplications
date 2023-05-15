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
    int found = 0;  

    printf("Enter the element to delete: ");
    scanf("%d", &element);


    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;  
            break;
        }
    }

    if (found) {
        
        for (int j = i; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        size--;
        printf("Element %d deleted successfully.\n", element);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
