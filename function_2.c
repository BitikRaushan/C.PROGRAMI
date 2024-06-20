#include<stdio.h>
float sum();            //function declaration 
int s(int,int);    //fun with argument and return type.
void main(){
   // sum();
    int c,d; 
    s(c,d);             //function calling;
    return 0;
}
float sum(){
    float a,b;            //function definition here;
    float sum=0;
    
    printf("enter the value of a\n");
    scanf("%f",&a);
     printf("enter the value of b\n");
    scanf("%f",&b);
    sum = a+b;
    printf("sum is = %f\n",sum);
}
int s(int a,int b){
    int s=0;
    printf("enter the value of a\n");
    scanf("%d",&a);
     printf("enter the value of b\n");
    scanf("%d",&b);
    s = a+b;
    printf("sum is = %d\n",s);

}