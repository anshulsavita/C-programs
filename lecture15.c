#include<stdio.h>

void main(){
    // xyz:
    //     printf("Hello");
    // goto xyz;

    // int i=2;
    // xyz:
    //     printf("%d,",i);
    //     i = i+2;
    //     if(i<=10){
    //         goto xyz;
    //     }

    // int i=1;
    // xyz:
    //     printf("%d,",i);
    //     i = i+2;
    //     if(i<=10){
    //         goto xyz;
    //     }

    // int i=10;
    // xyz:
    //     printf("%d,",i);
    //     i = i-1;
        
    //     if(i>=1){
    //         goto xyz;
    //     }

    // int i=1;
    // xyz:
    //     printf("%d,",i);
    //     i = i*10;
    //     if(i<=10000){
    //         goto xyz;
    //     }

    int i=10000;
    abc:
        printf("%d,",i);
        i = i/10;
        if(i>=1){
            goto abc;
        }
}