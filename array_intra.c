#include<stdio.h>
int unique(int[],int N[],int q);
int N[30];
int unique(int M[],int N[],int q){     //to print intersection of element btw two array.
    for(int i=0;i<q;i++){
        for(int j=0;j<6;j++){
         if(M[i]==N[j]){
            N[j]=-1;   //means next time this value not match with anyone.
            
        }else{
          continue;
        } printf("%d\t",M[i]);
        } 
         }
}
int main(){
   int M[5]={1,1,1,2,2};
   int N[6]={1,2,6,4,7,3};
   unique(M,N,5);
   return 0;
}