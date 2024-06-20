#include<stdio.h>               //(" FUNCTION-helps to short the code and and its reusuability;
// Create a function
void myFunction() {
  printf("I just got executed!\n");
}
void mynum(){
    printf("your marks are very good\n");
}
void add(int a,int b){
    int sum=0;
    
    // printf("enter the value of a\n");
    // scanf("%d",&a);
    //  printf("enter the value of b\n");
    // scanf("%d",&b);
    sum = a+b;
    printf("sum is = %d\n",sum);

}
int main() {
  myFunction(); // call the function
  myFunction(); // call the function
  myFunction();
  mynum();      // call the function
  add(4,5);
  return 0;
}  