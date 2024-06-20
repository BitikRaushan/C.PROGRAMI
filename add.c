# include <stdio.h>
# include <math.h>

int main() {
    int dis, amount,rate;
    float total;
    printf("Enter the amount and rate of :");
    scanf("%d %d",&amount,&rate);
    if (amount>=1000){
        dis=10;
        total =(amount*rate)-(amount*rate*dis/100);
        printf("your amount is Rs:%f",total);


    }
    else{
       float cost = amount*rate;
        printf("your price is Rs %f",cost);
    }

    


     return 0;


}