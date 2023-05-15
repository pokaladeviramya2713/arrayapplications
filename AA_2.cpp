#include <stdio.h>

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array in sorted order:\n");
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array in sorted order:\n");
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int merged[size1 + size2];
    int i = 0;  
    int j = 0;  
    int k = 0; 

    
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }


    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

   
    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
