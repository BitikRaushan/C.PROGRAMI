#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at row %d, column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the transpose of array are:\n");
    
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
           // arr[i][j]=arr[j][i];

            printf("%d\t", arr[j][i]);
            
        }
        printf("\n");
    }

  
    
    
    return 0;
}
