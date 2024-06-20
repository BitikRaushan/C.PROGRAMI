# include <stdio.h>
#include <math.h>


int main() {
    int size;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    // Declare two 1D arrays
    int arr1[size], arr2[size];

    // Input elements for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr2[i]);
    }

    // Calculate and print the sums of the two arrays at each index
    printf("Sum of arrays at each index:\n");
    for (int i = 0; i < size; i++) {
        int sum = arr1[i] + arr2[i];
        printf("Index %d: %d\n", i, sum);
    }

    return 0;
}










