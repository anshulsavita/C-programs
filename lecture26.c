#include<stdio.h>
// ***Reverse the number->
void main(){
    // ***Reverse the number->
    // int n,r,s=0;
    // printf("Enter Number:");
    // scanf("%d",&n);
    // while(n>0){
    //     r=n%10;
    //     printf("%d",r);
    //     n=n/10;
    // }
    
    // *******better option->
    // int n,r,s=0;
    // printf("Enter Number:");
    // scanf("%d",&n);
    // while(n>0){
    //     r=n%10;
    //     s=s*10+r;
    //     n=n/10;
    // }
    // printf("%d",s);

    // ****find Sum of each digit****
    // int n,r,s=0;
    // printf("Enter Number:");
    // scanf("%d",&n);
    // while(n>0){
    //     r=n%10;
    //     s=s+r;
    //     n=n/10;
    // }
    // printf("%d",s);

    // ****find the total number of digits which you entered.
    // int n,s=0;
    // printf("Enter Number:");
    // scanf("%d",&n);
    // while(n>0){
    //     s++;
    //     n=n/10;
    // }
    // printf("%d",s);

    // ****find how many even digits are in any number.
    // int n,r,a=0;
    // printf("Enter Number:");
    // scanf("%d",&n);
    // while(n>0){
    //     r=n%10;
    //     if(r%2==0){
    //         a++;
    //     }
    //     n=n/10;
    // }
    // printf("Total even numbers: %d",a);

    // ***find how many even and odd digits are in any number.
    int n,r,e=0,o=0;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if(r%2==0){
            e++;
        }
        else{
            o++;
        }
        
        n=n/10;
    }
    printf("even: %d\n",e);
    printf("Odd: %d",o);
}