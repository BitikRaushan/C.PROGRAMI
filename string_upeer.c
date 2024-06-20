#include<stdio.h>
#include<string.h>   //convert upper case alphabet to lower case letter.using strlwr()
int main(){
    // char ch[30],name[30];
    // int len1;
     
    // printf("enter the string\n");
    // gets(name);
    // len1=strlen(name);

    //p=strlwr(name);
   // printf("%s",strlwr(name)); 
   // using own logic 
//    for(int i=0;name[i]!='\0';i++){
//    // printf(" ascii value of %c = %d\n",name[i],name[i]);
//     if(name[i]>=97 && name[i]<=122){
//         int p=name[i];
//         int m= p-32;
//         name[i]=m;
//         printf("%c",name[i]);
    
//     }
int a,b;
printf("enter the start \n");
scanf("%d",&a);
printf("enter the  end point\n");
scanf("%d",&b);



for(int p=a+1;p<b;p++){
    int i=2;
    int count =0;
    while(i<=p){

        if(p%i==0)
           count ++;
        i++;
    }
           
        if(count==1){
        printf("ye no.%d prime hai\n",p);
        
        }
        else{
        printf("ye no.%d composite hai\n",p);
        
        }
        
    
        
    
    
}






   






   return 0;
}
