# include <stdio.h>
#include <math.h>

int main(){
  int a,b,c,d;
  printf("enter the value of the no.a,b,c,and d:\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  //printf("enter the value of the no.b:\n");
  //scanf("%d",&b);

  //printf("enter the value of the no.c:\n");
 // scanf("%d",&c);
 // printf("enter the value of the no.d:\n");
 // scanf("%d",&d);
  if(a>b){
    if(a>c){
        if(a>d){
            printf("A is the larger one \n");

        } else{
            printf("D is larger one\n");

        }
    } else{
        if(c>d){
            printf(" C is larger\n");
        }else{
            printf("D is larger\n");
           }
    }
    

  } else{
     if(b>c){
        if(b>d){
            printf(" b is the larger one");

        } else{
            printf("d  is larger one");

        }
      } else{
        if(c>d){
            printf(" C is larger\n");
        }else{
            printf("d  is larger\n");

          } 
          
       }
       return 0;
}  

