#include <stdio.h>
int main(){
int i, n;
printf("enter the value of n");
scanf("%d",&n);
 i=2;
while(i<n){

    if(n%i==0){
        printf("not a prime no.\n");
         i=i+1;
         
    }
    else{
        printf("prime no.");
    }
}

 
  

return 0;




}