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

    int isAscending = 1;
    int isDescending = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            isAscending = 0;  
        }
        if (arr[i] > arr[i - 1]) {
            isDescending = 0;  
        }
    }

    if (isAscending) {
        printf("The array is in ascending order.\n");
    } else if (isDescending) {
        printf("The array is in descending order.\n");
    } else {
        printf("The array is neither in ascending nor descending order.\n");
    }

    return 0;
}
