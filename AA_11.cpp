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

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average;
    if (size != 0) {
        average = (float) sum / size;
        printf("Average of the elements: %.2f\n", average);
    } else {
        printf("Array is empty. Average cannot be calculated.\n");
    }

    return 0;
}
