# include <stdio.h>
int main(){
    
         
    int i,j,sum[5], a[5],b[5],c[5];
    
    printf("enter the first array\n");
    for(i=0;i<5;i++){

      printf("enter the 1D array with index %d/n",i); 
      scanf("%d",&a[i]);
   }
    printf("enter the second array\n");
    for(j=0;j<5;j++)
   {
      printf("enter the 1D array with index %d/n",j); 
      scanf("%d",&b[j]);
        
   }
   for(i=0;i<5;i++){
      for(j=0;j<5;j++)
       c[j]=a[i]+b[j];
      scanf("%d",&c[i]);
   } 
         
   //for(i=0;i<5;i++){
      //c[i]=a[i]+b[i];
      //scanf("%d",&c[i]);
     
   printf("\n the sum  array at index is %d\n",c[5]);
    


   return 0;
}       