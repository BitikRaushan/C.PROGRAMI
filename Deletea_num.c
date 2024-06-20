#include<stdio.h>
int delete_adigit(int ,int);
int delete_adigit(int a,int b){
    int n=a;
   int remainder=0;
    int number=0;
    int digit=b;
    int position=1;
    
     while(n!=0){
    remainder=n%10;
    if(remainder!=digit){
        number= number +remainder*position;
      position=  position*10;
        
    } 
    n=n/10;
    }
    return number;
    }
 int main(){
    int n=5;
    
    // int digit;
    // printf("enter the number\n");
    // scanf("%d",&n);
    // printf("enter the digit to delete\n");
    // scanf("%d",&digit);
     //int result=delete_adigit(n,digit);
     
     //printf("%d",result);
     int j=3;
     int *k=&j;
     int l=6;
     int p=(j,k,l);
     printf("%d",*(k+2));
    //  int*p;
    //  int**q;
    //  p=&n;
    //  q=&p;
    //  printf("%d\n",*p);
    //  printf("%d",**q);


    
    
    




 





return 0;
}