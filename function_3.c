#include<stdio.h>                    //("these are fun with argument without return type.")
void sum(float,int);    //declaration
 void id(int);                  // datatype only nedded(int, int )are called as parameter

void main(){
    int n;
    
  //  sum(6.2,6); 
    printf("enter a number");
    scanf("%d",&n);
    id(n);               
    //return 0;
}
//calling
void sum(float a,int b){          //in function heade[ reurntype- name(argument with datatype)]
       float sum=0;
//    printf("enter the value of a\n");
//     scanf("%d",&a);
//      printf("enter the value of b\n");
//     scanf("%d",&b);
     sum = a+b;
    printf("sum is = %f\n",sum);


} //called void return
void id(int h){
    if(h%2==0){
        printf("prime no");
    }
    else{
        printf("not a prime no.");
    }
}

