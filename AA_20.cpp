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

    printf("Unique elements: ");

    for (int i = 0; i < size; i++) {
        int isUnique = 1;

      
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
