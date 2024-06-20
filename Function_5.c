#include<stdio.h>                    //("Function with no argument withourt return type")
void fun(void);
int sum(void);   //("function with returntype or not argument")
void main (){
    int s=sum();
    printf("sum is = %d\n",s);
    fun();
    
    return 0;
}
void fun(){
    char ch;
    
    printf("enter a character\n");
    scanf("%c",&ch);
    printf("the ch- %c ,ascii no is = %d\n",ch,ch);
    }
int sum(){
    int a,b,sum=0;
     a=7;
     b=23;
     sum= a+b;
    return sum,b;     //("comma refuse the first and operate next as here b")
}