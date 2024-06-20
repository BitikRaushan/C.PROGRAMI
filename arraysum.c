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
    printf("The sum of particular cols&rows of array are:\n");
    
    for (int i = 0; i < rows; i++) {
        int sr=0,sc=0;
        for (int j = 0; j < cols; j++)

        {// printf("\nenter the sum of rows=%d,cols=%d \n",i,j);
            sr=sr+arr[i][j];
            sc=sc+arr[j][i];
            
            
        }
        printf("sum SR= %d = %d,SC= %d = %d\n",i,sr,i,sc);
        

        printf("\n");
    }

  
    
    
    return 0;
}