# include <stdio.h>
#include<stdlib.h> //reverse array after at a particulat n;
//void reversearray(int [],int,int);
int main() {
    int a[] = {1, 2, 3, 4, 5,8,9,2,10,11,14};
    int n;
    printf("enter the valu \n");
    scanf("%d",&n);
    
    
    int i;
    for(i=n+1;i<10;i++){
       int w=a[i];
        a[i]=a[i+1];
        a[i+1]=w;
    }
    for(int i=0;i<11;i++){
        printf("%d\t",a[i]);
    }
   // reversearray(a,5,2);
   // printf("%d\t",a);
    return 0;
    
    }
// void reversearray(int arr[],int m,int n){
//     int i=0,w[30];
    
//     for(i=n+1;i<=m;i++){
//         w[i]=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=w[i];
//     }
//     for(int i=0;i<m;i++){
//         printf("%d\t",arr);
//     }
    


// }

