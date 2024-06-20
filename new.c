#include<stdio.h>
#include<string.h>
void Swap(char,char);
void Swap(char p,char q){
    char t=p;
    p=q;
    q=t;
   // return *p;

}
int main(){
    char p[]="abfyg";
    char q[]="abfgy";
    int l=strlen(p);
   // printf("%d\n",l);
    for(int i=l-1;i>=1;i--){
        Swap(p[i],p[i-1]);
         if (p == q){
            return 1;
          
        } 
    }
        

    















    return 0;



}