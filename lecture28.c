// ***prime factor
#include<stdio.h>
void main(){
    // int i=2,n;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>1){
    //     if(n%i==0){
    //         printf("%d",i);
    //         n=n/i;
    //     }
    //     else{
    //         i++;
    //     }
    // }

    //**Decimal to binary.
    // int r,n,s=0,p=1;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%2;
    //     s=s+(r*p);
    //     p=p*10;
    //     n=n/2;            
    // }
    // printf("%d",s);

    // binary to decimal
    int r,n,p=1,s=0;
    printf("Enter a binary number:");
    scanf("%d",&n);

    while(n>0){
        r=n%10;
        s=s+(r*p);
        p=p*2;
        n=n/10;
    }
    printf("%d",s);

}