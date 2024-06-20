# include <stdio.h>
#include <math.h>

int main() {
  int a,b,c;
  printf("enter the value of the no.a,b,and c:\n");
  scanf("%d %d %d" ,&a,&b, &c);
  //printf("enter the value of the no.b:\n");
  //scanf("%d" ,&b);

  //printf("enter the value of the no.c:\n");
  //scanf("%d" ,&c);

  if(b>a){
    if(b>c)
      printf("b is larger\n");

   else
      printf("c is larger\n");

    
  } else{
      if(a>c)
       printf(" a is larger one");

      else
         printf(" c is larger one");
    }


  return 0;

    }