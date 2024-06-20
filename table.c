# include <stdio.h>
# include <math.h>
int i,j;
int num,count=1;


int main(){
    // for(i=7;i<10;i++)
    // {
    //     for(j=1;j<=10;j++)
    //     {
    //     printf("%d*%d=%d\n",i,j,i*j);
    //     }
    // }  printf("\n ==========\n");  
printf("enter the value of the number");
scanf("%d",&num);
while(count<=10)
{ 
    j=num*count;
    printf("%d * %d =%d\n",num,count,num*count);
    count=count+1;


}

return 0;
}