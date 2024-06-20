#include<stdio.h>
int main(){
    // int w[5]={2,4,7,1,9};
    //  for(int i=1;i<5;i++){
    //  for(int j=0;j<5-i;j++){
    //     if(w[i+1]<w[i])
    //     swap(&w[i],&w[i+1]);
    //  }
    int count=0;
    int arr[5]={2,5,1,3,5};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i]>arr[j] && i<j){
                count++;
            }else{
                continue;
            }
        }
    } printf("%d",count);







    return 0;
}