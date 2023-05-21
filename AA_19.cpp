#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int total_elements = n + 1;
    int total_sum = (total_elements * (total_elements + 1)) / 2;  // Sum of elements from 1 to n+1
    int array_sum = 0;

    for (int i = 0; i < n; i++) {
        array_sum += arr[i];
    }

    int missing_element = total_sum - array_sum;

    printf("The missing element in the array is: %d\n", missing_element);

    return 0;
}
