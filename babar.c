#include<stdio.h>    //reverse digit place#question
#include<string.h>
//void swap(int [],int n);
int unique(int [],int q);
void printarray(int[],int p);
void swap(int marks[],int n){
    int i,c[20];
    for(i=0;i<n-1;i=i+2){
        c[i]=marks[i];
        marks[i]=marks[i+1];
        marks[i+1]=c[i];
    }
}
void printarray(int marks[],int p){
    for(int i=0;i<=p-1;i++){
        printf("%d\t",marks[i]);

    }
}
int unique(int M[],int q){ 
    int m=0;    //to print a unique element in array.
                               //to print duplicate
    for(int i=0;i<q;i++){
        int count=0;
        
        for(int j=0;j<q;j++){
            
           if(M[i]==M[j]){
            
            
           count++;
           }
           else{
            continue;
           }
           //printf("%d %d\n",M[i],count);

           
       }if(count==2  ){
            printf("%d\n",M[i]);
            break;
       }
        

        
    
    }
}

        


int main(){
    int M[5]={1,2,3,4,3};
    unique(M,5);
   // printarray(M,5);
    // int marks[5]={1,11,12,18,9};
    // int N[6]={12,23,45,65,67,78};

    // swap(marks,5);
    // printarray(marks,5);
    // printf("\n");
    // swap(N,6);
    // printarray(N,6);
    
    return 0;
}
