#include<stdio.h>               //("pointer to pointer or double pointer")
int main(){                     //int * denote the datatype of this pointer
//*p tells it is a pointer value
    // int a=10,b=8;
    // int *p=&a; 
    // int**q=&p;
    // int ***r=&q;
    // **q=25;
    // printf("value of a=%d %d %d %d\n",a,*p,**q,***r);
    int a[]={0,1,2,3,4,5};
    int *p=&a[0];
    p=p+2;    //also use p-2 it gives baack to 8 bytes and and gives a pointer
    printf("%d\n",*p);
    int *q=&a[3];
    int e= q-p;
    printf("%d",e);      //if we write p+2 means adress of p plus 8 bytes ie shows that ans2
                                  //subs give how many elements between them two pointer


    return 0;
}
