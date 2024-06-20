#include<stdio.h>
#include<string.h>
int main(){
    int len1,len2;
    char name[20] ="monu";
    char title[5]="kumar";
    len1=strlen(name);
    printf("%d\n",len1);
    len2=strlen(title);
    printf("%d\n",len2);
    for(int i=0;i<=len2;i++){
        name[len1+i]=title[i];                   //also used strcat(s1,s2,no.ofcharacter we want)
        //also used strcat(s1,s2)for this concatination
    }                                      //to reverse we use strrev(s1)
     printf("string is  %s \n",name);







}