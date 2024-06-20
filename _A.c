#include<stdio.h>
#include<string.h>
char toLowerCase(char );
  char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int main(){
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
   if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        printf("%c",ch);
    else{
        char temp = ch - 'A' + 'a';
        printf("%c",temp);
    }









   return 0;

}