#include <stdio.h>
#include <strings.h>
int main(){
//     char name[]="BITIK";
//    printf("%d\n",strlen(name));
//     printf("%d\n",sizeof(name));             //sizeof counts also the null character in this so
//                                                    //ans is 6
    //printf("%s\n",name);
//puts(name);           //puts also print the string line in it.
   // for(int i=0;i<5;i++){
       // printf("%s",name[i]);
      //  printf("%c",name[i]);
   // }   
    //    char myname[30];
    //    printf("enter the strings value");
    //    //scanf("%s",myname);            //scanf cannot gets the value of space between 
    //    gets(myname);                             //them so we use gets function
    //    printf("%s\n",myname);
    //    printf("%s\n",&myname[2]);
    //    printf("%.5s",myname);
    // int arr[20]={4,7,9,1,3,50,40};
    // int a=
    // printf("%d",a);
    char s={"m","y"," ","n","a","m","e"," ", "i","s"," ","m","o","n","u"};
    for(int *i=0;i<strlen(s);i++){
        while( s[i]=='_ '||  s[i]=='\0'){
            printf("%d",i);
            i++;
        }



    }



        









    return 0;
}