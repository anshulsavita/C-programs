#include<stdio.h>
void main(){
    // break--> this function is used to break(stop) a loop
    // int i=1;
    // while(i<=10){
    //     printf("%d",i);
    //     if(i>=5){
    //         break;
    //     }
    //     i=i+1;
    // }

    // continue--> again move the control to while(exp)
    // int i=1;
    // while(i<=10){
    //     printf("%d,",i);
    //     if(i<=5){
    //         i=i+1;
    //         continue;
    //     }
    //     i=i+2;
    // }

    // enter a number and check it is prime number or not.
    int i=2,n;
    printf("Enter number:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            break;
        }
        i=i+1;
    }
    if(n==i){
        printf("Prime number:%d",n);
    }
    else{
        printf("Not prime:%d",n);
    }

    // Question--> enter minimum, maximum values and difference through keyboard and print a series form min to max with given difference.
    // int min,max,diff;
    // printf("Enter minimum values:");
    // scanf("%d",&min);

    // printf("Enter maximum value:");
    // scanf("%d",&max);

    // printf("Enter Difference value:");
    // scanf("%d",&diff);

    // while(min<=max){
    //     printf("%d,",min);
    //     min=min+diff;
    // }

    // enter a number and replace its first and last digit.
}