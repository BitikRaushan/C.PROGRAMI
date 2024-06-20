
# include <math.h>             //problem on the pointer operator in string;

int main() {
    char str[]="welcome to agartala nita";
    char *p=&str;
    printf("%c\n",*p);
    printf("%c\n",*(p++ +1));
    printf("%c\n",*((p +5)-1) +3);             //at last we add 3 to ascii value of these 
    printf("%c\n",*(++p +10)-32);          //after subtract we get capital A in these
    printf("%c %c %c",*p,*++p,*--p);

    return 0;
}