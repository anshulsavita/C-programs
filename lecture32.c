#include<stdio.h>
void main(){
    /*Question--> 1 
                1 2 
                1 2 3 
                1 2 3 4 
                1 2 3 4 5*/
    // int i=1,j;
    // while(i<=5){
    //     j=1;
    //     while(j<=i){
    //         printf("%d ",j);
    //         j=j+1;
    //     }
    //     i=i+1;
    //     printf("\n");
    // }

    // int i=1,j;
    // while(i<=9){
    //     j=1;
    //     while(j<=i){
    //         printf("%d ",j);
    //         j=j+1;
    //     }
    //     i=i+2;
    //     printf("\n");
    // }

    // int i=5,j;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf("%d ",j);
    //         j=j+1;
    //     }
    //     i=i-1;
    //     printf("\n");
    // }

    // int i=1,j;
    // while(i<=5){
    //     j=5;
    //     while(j>=i){
    //         printf("%d ",j);
    //         j=j-1;
    //     }
    //     i=i+1;
    //     printf("\n");
    // }

    // int i=5,j;
    // while(i>=1){
    //     j=5;
    //     while(j>=i){
    //         printf("%d ",j);
    //         j=j-1;
    //     }
    //     i=i-1;
    //     printf("\n");
    // }

    int i=1,j;
    while(i<=5){
        j=i;
        while(j<=5){
            printf("%d ",j);
            j=j+1;
        }
        i=i+1;
        printf("\n");
    }
}