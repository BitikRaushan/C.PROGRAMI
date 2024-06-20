#include<stdio.h>          //binary search and find first and last poisition of key
int unique(int [],int n,int k);
int first(int [],int n,int k);
int last(int[],int n,int k);
int unique(int a[],int n,int k){
   int s=0;                      //binary search takes place in sorted array
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(k==a[mid]){
            return mid;
        }
        if(k>a[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
        
    }
    return -1;
    
    }
    int main(){
        int even[6]={1,2,3,4,5,6};
        int odd[5]={8,9,10,11,12};
        int m[5]={2,3,4,4,4};
       
       int evenindex= unique(even,6,6);
       int oddindex= unique(odd,5,11);
       printf("index of 6 is at is %d\n",evenindex);
       printf("index of 11 is at %d\n",oddindex);
       int firstposition=first(m,5,4);
        printf("first position index of 4 is at %d\n",firstposition);
        int lastindex=last(m,5,4);
        printf("lastposition index of 4 is at %d\n",lastindex);

        
        return 0;

    }
    int first(int a[],int n,int k){
                      //binary search takes place in sorted arra
     int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(a[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(k > a[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(k < a[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int last(int a[],int n,int k){
     int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(a[mid] == k){
            ans = mid;
            s= mid + 1;
        }
        else if(k > a[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(k < a[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}


    






    


    









