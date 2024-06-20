# include <stdio.h>
# include <math.h>
int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // int count=0;
    //  for (int i = 1; i <= rows; i++) {
       
    //     for (int j = 1; j <= i; j++) {
    //         count++;
    //         printf("%d\t",count);
    //     }
    //     printf("\n");
    // }
    //  for (int i = 1; i <= rows; i++) {
       
    //     for (int j = 1; j <= i; j++) {
            
    //         printf("%d\t",i+j-1);
    //     }
    //     printf("\n");
    //     printf("\n");
    // }



    // for (i = 1; i <= rows; i++) {
    //     for (j = 1; j <= i; j++) {
    //         printf("%d",i);
    //     }
    //     printf("\n");
           // printf("\n")
    // }
    // for (i = 1; i <= rows; i++) {
    //    for (j = 1; j <= 2*i-1; j++) {
    //         printf("* ");
    //      }
    //      printf("\n");
    //      printf("\n");
    // }
    // for (i = 1; i <= rows; i++) {
    //     for (j = 1; j <= i ;j++) {
    //         printf("%d",j);
    //     }
    //      printf("\n");
            //printf("\n");
    //  }
    // for (i = 1; i <= rows; i++) {
    //     for (j = 1; j <= i; j++) {
    //         printf(" * ");
    //     }
    //     printf("\n");
    //     printf("\n");
    // }
    //  for (i = 1; i <= rows; i++) {
    //     int p=i;
    //     for (j = 1; j <= i; j++) {
            
    //         printf("%d\t",p);  //also use formula that is  (i-j +1);
    //         p--;
            
    //      }
    //     printf("\n");
    //  }
    //  for (i = 1; i <= rows; i++) {
    //     for (j = 1; j <= i; j++) {
    //         char ch='A'+i-1;
    //         printf(" %c\t",ch);
    //     }
    //     printf("\n");
    //  }
      for (i = 1; i <= rows; i++) {
         for (j = 1; j <= rows; j++) {
            char ch='A'+j-1;
             printf(" %c\t ",ch);
         }
          printf("\n");
      }
    



    return 0;
}




     






