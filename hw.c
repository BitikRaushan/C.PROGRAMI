#include<stdio.h>
// void counting(int);

// void counting(int n){
//     printf("%d\n",n);
//     if(n==0){
//         return ;

//     }
//     printf("%d\n",n);
//     counting(n-1);
    
// }
// int main(){
//     int a,b;
//    printf("enter the value \n");
//     scanf("%d ",&a);
//     counting(a);
    
// }
int main(){
    int arr[]={1,2,3,4,3};
    int i=0;
    int p=sizeof(arr)/sizeof(arr[0]);
	int j=sizeof(arr)/sizeof(arr[0])-1;
	while( i<p && j>=0){
		if(arr[i]==arr[j]){
	    printf("%d",arr[i]);
			
		}else{
			j--;
		
		}
	}i++;

    return 0;
}
    