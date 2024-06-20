#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    int len1;
    printf("enter the string\n");
    gets(name);     //it read the blank sign also between the strings/
    int i;
    len1=strlen(name);
    printf("%d\n",len1);
    for(i=0;i<len1/2;i++){
        char ch=name[i];
        name[i]=name[len1-1-i];
        name[len1-1-i]=ch;
    }
    printf("%s\n",name);
    return 0;
}