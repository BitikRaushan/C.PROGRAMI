#include <stdio.h>

#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input the number of rows and columns for the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    // Declare the 2D array
    int arr[rows][cols];
    
    // Input elements into the 2D array
    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at row %d, column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Print the elements of the 2D array
    printf("The elements of the 2D array are:\n");
    int sum =0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
             sum= sum+arr[i][j];
        }
        printf("\n");
    }
    printf("sum is : %d\n",sum);
  
    
    
    return 0;
}
