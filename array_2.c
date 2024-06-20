# include <stdio.h>
int  main(){
    //sum=sum+marks[i];
   // printf("%d",sum);
 marks[5]; 
  int i;
   int sum=0;
   float avg;
   printf("enter marks of 5 student:\n");
    
   for(int i=0;i<5;i++){
    printf("enter the array with index %d\n,i");

    scanf("%d",&marks[i]); 
    

     sum=sum+marks[i];
    
   }
    printf("%d\n",sum);                         
    avg=sum/5;
   printf("%f",avg);
    
   











    return 0;
}