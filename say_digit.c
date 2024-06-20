#include<stdio.h>
#include<string.h>
void say(int n,char* []);

void say(int n,char *a[]){
    int quotient;
    if(n>0){
     quotient=n%10;
    n=n/10;
    }printf("%s",a[quotient]);
    printf("\n");
    say(n,a);

                                 // to store multiple string .we use pointer in the array
}
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
   char *strings[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    say(n,strings);









return 0;

}