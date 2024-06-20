#include<stdio.h>
void fun(int,int);
int myFunction(int,int);

void main (){
    int x=3,y=4;
    fun(x,y);
    printf("x=%d,y=%d\n",x,y);
    int result = myFunction(5, 3); 
  printf("Result is = %d\n", result);
   int myNumbers[5] = {10, 20, 30, 40, 50};  
     myFun(myNumbers);
    
}
void fun(int x,int y){         //call by value function
     x=7;
     y=9;
    printf("x=%d,y=%d\n",x,y);
}
int myFunction(int x, int y) {    //("function with argument and return type")
  return x + y;
}
void myFun(int myNumbers[5]) {// contained an array as well 
  for (int i = 0; i < 5; i++) {    //("function with argument and with no return type.")
    printf("%d\n", myNumbers[i]);
  }
}




