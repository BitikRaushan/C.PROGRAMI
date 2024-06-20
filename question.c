# include <stdio.h>
# include <math.h>

//int main(){                                     //QUESTION NO.03
// int a,b,c,d;
// char g,A,s;

// printf("enter the value of a");
// scanf("%d",&a);
// printf("enter the value of b");
// scanf("%d",&b);
// c = a +b;
// d= a-b;
// printf("enter the value of g\n");
// scanf("%s",&g);
// if(g=='A'){
//     printf("i have to add these and sum= %d\n",c);

// }else if(g=='s'){
//     printf("i have to sub these and sub= %d",d);
// }

// question no.02
// char a,e,i,o,u,letter;

// printf("enter the  letter");
// scanf("s",&letter);
// if(letter=='a'&&'e'&&'i'&&'o'&&'u'&&'\0'){
//     printf("vowels hai ye ");
// }
// else{
//     printf("cosonent");

// char letter;
// char vowels[5]={'a','e','i','o','u','\0'};
// printf("enter the letter");
// scanf("%s",&letter);
// if(letter==vowels[5]){
//     printf("Vowels");
// }else{
//     printf("consonent");
// }
int main(){
char l;
int p=0;
printf("enter the letter");
 scanf("%s",&l);
 char vowels[5]={'a','e','i','o','u'};
  for(p=0;p<5;p++){
    if(l==vowels[p]){
        printf("vowels hai\n");
        break; 
    }   
    else{    
     
        printf("consonent hai\n");
    }
  }

 


return 0;

}