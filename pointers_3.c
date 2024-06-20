#include<stdio.h>               //("increment or decrement in pointer ")
int main(){ 
    int a[]={1,2,3,4,5,6};
    int *p;
    p=&a[2];
    //p++ ;
    //printf("%d\n",*p++);     //here it gives initial value of p after this it will increase
    //printf("%d",*++p);         //pre gives the next value initially
    //printf("%d %d\n",*p++,*p++);  
     //printf("%d",*p--); 
    // printf("%d %d %d",*--p,*--p,*--p);
     printf("%d",--(*p));       //*p gives the value of integer as 3 decrement in their value not in adress                         




















    return 0; 
}