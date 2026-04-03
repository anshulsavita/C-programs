#include<stdio.h>
void main(){
    // ***linear search***
    // Question-> input 10 numbers in array, input n (number u want to search)
    // int x[10],i,n,c=0;
    // for(i=0;i<=9;i++){
    //     printf("Enter number:");
    //     scanf("%d",&x[i]);
    // }
    // printf("Enter number u want to search:");
    // scanf("%d",&n);
    // for(i=0;i<=9;i++){
    //     if(x[i]==n){
    //         c++;
    //     }
    // }
    // printf("%d",c);

    // Question--> program to find out the position of specified element.
    // int x[10],i,n,c=0;
    // for(i=0;i<=9;i++){
    //     printf("Enter number:");
    //     scanf("%d",&x[i]);
    // }
    // printf("Enter value of N:");
    // scanf("%d",&n);
    // for(i=0;i<=9;i++){
    //     if(x[i]==n){
    //         printf("%d,",i);
    //     }
    // }

    // Question--> input 10 academic percentage thru keyboard and find out total number of grade A,B,C & D.
    // 80 - 100 A
    // 60 - 79 B
    // 45 - 59 C
    // 0 - 44 D
    int x[10],i,a=0,b=0,c=0,d=0;
    for(i=0;i<=9;i++){
        printf("Enter number:");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++){
        if(x[i]>=80 && x[i]<=100){
            a++;
        }
        else if(x[i]>=60 && x[i]<=79){
            b++;
        } 
        else if(x[i]>=45 && x[i]<=59){
            c++;
        }
        else if(x[i]>=0 && x[i]<=44){
            d++;
        }
    }
    printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);

}