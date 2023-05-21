#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 1) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int secondMin = arr[1];

    if (secondMin < min) {

        int temp = min;
        min = secondMin;
        secondMin = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }

    printf("Second minimum element: %d\n", secondMin);

    return 0;
}
