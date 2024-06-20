#include<stdio.h>
#include<string.h>

int average(int [],int);      //passing array as an argument
int main(){
    int c=0,a;
    int marks[5]={10,10,10,10,10};
       c=average( marks, 5);
       printf("avg is =%d",c);
       return 0;
}
int average(int marks[],int a){    // array is consider as call by reference (*p)
    int i;
    int sum=0,average=0;
    for(i=0;i<=a;i++){
        sum=sum+marks[i];
    }
    average=sum/a;
    return average;
}
