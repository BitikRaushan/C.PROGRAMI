#include<stdio.h>
int main() {
    int arr[2][3],b[2][3],c[2][3];
    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at row %d, column %d: \n", i, j);
            scanf("%d", &arr[i][j]);
            printf("Enter element of b array at row %d, column %d: \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j]=arr[i][j]+b[i][j];
        
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
      return 0;
}
    