#include<stdio.h>
void main(){
    // **Find the sum of first 5 values
    // int i=1,s=0;
    // xyz:
    //     s=s+i;
    //     i=i+1;
    //     if(i<=5)
    //     {
    //         goto xyz;
    //     }
    //     printf("Sum: %d,",s);

    // **Enter a number and find the sum from zero to that number.
    // int i=1,s=0,n;
    // printf("Enter N:");
    // scanf("%d",&n);
    // xyz:
    //     s=s+i;
    //     i=i+1;
    //     if(i<=n)
    //     {
    //         goto xyz;
    //     }
    //     printf("Sum: %d,",s);

    // ***enter total item and their prices and find the bill.
    // int i=1,s=0,n,N;
    // printf("Enter total items:");
    // scanf("%d",&N);
    // xyz:
    //     printf("Enter the value: ");
    //     scanf("%d",&n);

    //     s=s+n;
    //     i=i+1;
    //     if(i<=N){
    //         goto xyz;
    //     }
    //     printf("sum: %d",s);

    // ****find the factorial of first five values.
    int p=1,n=5;
    xyz:
        p=p*n;
        n=n-1;
        if(n>1){
            goto xyz;
        }
        printf("product is: %d",p);
}