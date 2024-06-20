#include<stdio.h>
int main(){
    int arr[2][2],b[2][2],c[2][2];
    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element at row %d, column %d: \n", i, j);
            scanf("%d", &arr[i][j]);
            printf("Enter element of b array at row %d, column %d: \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        int d,sum =0;
        for (int j = 0; j < 2; j++) {
            d=arr[i][j]*b[j][i];
            sum= sum+d;
            
        
        //printf("%d\t",c[i][j]);
        }
        for (int j = 0; j <=i; j++) {

            c[i][j]=sum;
             printf("%d\t",c[i][j]);
        }
           
        printf("\n"); 
    }  
 return 0;

}