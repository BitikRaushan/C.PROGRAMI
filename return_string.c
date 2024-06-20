# include<stdio.h>
int count(int n){
    if(n==0)
    return 1;
    if(n<0)
    return 0;

    int ans=count(n-1)+count(n-2);
    
    return ans;
}
int main(){
    count(5);
    return 0;
}