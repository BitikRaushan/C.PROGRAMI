#include<stdio.h>
int jumbel(int x,int y)        //("I solved this,gate 2019 ques.")
{
    x=2*x+y;
    return x;
}
int incr(int i){
    static int count=0;
    count=count+i;
    return count;
}
void f(int *p,int m){
        m=m+5;
        *p=*p+m;
        return;
}
int main(){
    // int x=2,y=5;
    // y=jumbel(y,x);
    // x=jumbel(y,x);
    // printf("%d",x);
    // int i,j;                  //G-2020;
    // for(i=0;i<=4;i++){
    //    j=incr(i);
    //    printf("j=%d\n",j);
    // }
    int i=5,j=10;
    f(&i,j);
    printf("%d",i+j);
    return 0;
}