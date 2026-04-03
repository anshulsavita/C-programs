#include<stdio.h>
void main(){
    int i,n,x,y;

    do{
    printf("Enter first number:");
    scanf("%d",&n);
    printf("Enter second number:");
    scanf("%d",&i);
    printf("Main Menu:\n");
    printf("1:Addition\n2:Substraction\n3:Mul\n4:div\n5:Exit\n");
    printf("Enter your choice:");
    scanf("%d",&x);

    switch (x){
        case 1:
        y=n+i;
        printf("%d",y);
        break;

        case 2:
        y=n-i;
        printf("%d",y);
        break;

        case 3:
        y=n*i;
        printf("%d",y);
        break;

        case 4:
        y=n/i;
        printf("%d",y);
        break;

        case 5:
        printf("Good by...");
        break;

        default:
        printf("nothing...");
    }
    printf("\n");
}while(x!=5);

// for loop--> it is more structured then while loop.
// ***Syntex**

// for(statement one;condition;statement two){
//     ====
//     ====
//     [break];
//     [continue];
// }

// int i=1;
// for(printf("Gwalior\n");i<=3;printf("Indore\n")){
//     printf("Ujjain\n");
//     i++;
// }
}