#include<stdio.h>
int findDuplicate(int *arr, int n){
	 int j,i;
	
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
	     
		if(arr[i]==arr[j]){
			return arr[j];
			break;
		}
          else{
			continue;
			
		  }
	   }
    }
	
}
int main(){
    int arr[5]={1, 2,3 , 2, 2};
   int b= findDuplicate(arr,5);
   printf("%d",b);

}