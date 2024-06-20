# include <stdio.h>
int main(){
    int i;
    int a[10];
    int even=0,odd=0;
    
    printf("enter array elements :\n");
     for(i=0;i<10;i++)
     {   printf("Enter the element with index %d\n",i);
         scanf("%d",&a[i]); 
              //take input of thr array usinf for loop  //for input purpos
         if(a[i]%2==0){
           even++;
        
         }
        else
           odd++;
        
        
     }
     printf("even elements are %d\n",even);
     printf("enter the odd elemens are %d",odd);










return 0;
}
 