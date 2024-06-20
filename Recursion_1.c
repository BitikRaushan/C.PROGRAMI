#include<stdio.h>//when function call itself directly or indirectly known as recursion
int main(){
    int result = sum(10);
  printf("%d", result);
  return 0;

}
int sum(int k);


  
int sum(int);

int sum(int k) {
    int s=0;
  if (k==1) 
  return k;
  
    s=k + sum(k - 1);
    return s;
  
  
}