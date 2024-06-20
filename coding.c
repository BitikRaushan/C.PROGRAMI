#include<stdio.h>
int kPure(int n, int k) {
    // Write your code here.
    
    int count=0;
    
    while(n>k){
        
        
        if(n%k==0 && (n/k)%k!=0){
            count ++;
        }else{
            continue;
           
        } n--;


    }printf("%d",count);
}



int main(){
    kPure(18,2);









    return 0;
}