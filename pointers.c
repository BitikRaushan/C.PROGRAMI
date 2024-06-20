#include<stdio.h>
int main(){
    int a=10,b=8;
    int *p=&a;      
    p=(&a,&b);            //here firstly logical operator operate and after
    // that comma ,but comma operator
    //will execuate as value of p 
    int *q=&b;
    int c=*p;

    
    printf("value of c=%d",c);
    printf("value of a=%d\n",*p);
    printf("value of a=%x\n",p); 
    printf("value of a=%x\n",&a);                        //indirection operator (*),adress of (&)
    //*p indicates the value stored in that specific adress 
    //&p means adress of p pointer 
    printf("value of p=%x\n",&p);
    printf("value of p=%d\n",*p);
    p=&a;
   * q=*p;   //(*p=*q,gives anerror ,q is not initilize before,here actually above defined)h/
    printf("value of a=%d %d %d",a,*p,*q);













}