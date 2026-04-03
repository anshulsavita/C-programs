#include<stdio.h>
void main(){
// ***perfect number
    // int n,r,s=0,p=1;
    // printf("Enter Number:");
    // scanf("%d",&n);
    // while(n>0){
    //     r=n%10;
    //     s=s+r;
    //     p=p*r;
    //     n=n/10;
    // }
    // if(p==s){
    //     printf("it is a perfect number");
    // }
    // else{
    //     printf("not a perfect number");
    // }    

    // **armstron number
    int n,r,c,s=0,t;
    printf("Enter Number:");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        c=r*r*r;
        s=s+c;
        n=n/10;
    }
    if(s==t){
        printf("its armstrong number");
    }
    else{
        printf("its not");
    }

    // ****palindrom number
    // int n,r,s=0,p=1,t;
    // printf("Enter Number:");
    // scanf("%d",&n);
    // t=n;
    // while(n>0){
    //     r=n%10;
    //     s=s*10+r;
    //     n=n/10;
    // }
    // if(t==s){
    //     printf("it is a Palindrom number");
    // }
    // else{
    //     printf("not a Pelindrom number");
    // } 

    // enter a number through keyboard and print their factors

    // int n,i=1;
    // printf("Enter Number:");
    // scanf("%d",&n);

    // while(i<=n){
    //     if(n%i==0){
    //         printf("%d,",i);
    //     }
    //     i++;
    // }
}