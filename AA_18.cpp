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

    int k;
    printf("Enter the value of K: ");
    scanf("%d", &k);


    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
              
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (k >= 1 && k <= size) {
        printf("The %dth minimum element in the array is: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value of K. Please enter a value between 1 and %d.\n", size);
    }

    return 0;
}
