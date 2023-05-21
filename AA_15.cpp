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

    int product = 1;

    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }

    printf("Product of the elements: %d\n", product);

    return 0;
}
