#include<stdio.h>
void main(){
    // nested while loop--> loop in a loop.
    /*Question--> 12345
                  12345
                  12345
                  12345
                  12345 */
    // int i=1,j;
    // while(i<=5){
    // j=1;
    // while(j<=5){
    //     printf("%d",j);
    //     j=j+1;
    // }
    // i=i+1;
    // printf("\n");
    // } 
    
    /*Question--> 2 4 6 8
                  2 4 6 8
                  2 4 6 8
                  2 4 6 8
                  2 4 6 8 */
    // int i=1,j;
    // while(i<=5){
    // j=2;
    // while(j<=8){
    //     printf("%d ",j);
    //     j=j+2;
    // }
    // i=i+1;
    // printf("\n");
    // }

    /*Question--> 9 7 5 3 1
                  9 7 5 3 1
                  9 7 5 3 1
                  9 7 5 3 1
                  9 7 5 3 1 */
    // int i=1,j;
    // while(i<=5){
    // j=9;
    // while(j>=1){
    //     printf("%d ",j);
    //     j=j-2;
    // }
    // i=i+1;
    // printf("\n");
    // }

    /*Question--> 1 3 5 7 9
                  1 3 5 7 9
                  1 3 5 7 9
                  1 3 5 7 9
                  1 3 5 7 9 */
    // int i=1,j;
    // while(i<=5){
    //     j=1;
    //     while(j<=9){
    //         printf("%d ",j);
    //         j=j+2;
    //     }
    //     i=i+1;
    //     printf("\n");
    // }

    /*Question--> 1 1 1 1 1
                  2 2 2 2 2
                  3 3 3 3 3
                  4 4 4 4 4
                  5 5 5 5 5 */
    // int i=1,j;
    // while(i<=5){
    //     j=1;
    //     while(j<=5){
    //         printf("%d ",i);
    //         j=j+1;
    //     }
    //     i=i+1;
    //     printf("\n");
    // }

    /*Question--> 5 5 5 5 5
                  4 4 4 4 4
                  3 3 3 3 3
                  2 2 2 2 2
                  1 1 1 1 1 */
    // int i=5,j;
    // while(i>=1){
    //     j=1;
    //     while(j<=5){
    //         printf("%d ",i);
    //         j=j+1;
    //     }
    //     i=i-1;
    //     printf("\n");
    // }

    /*Question--> 9 9 9 9 9
                  7 7 7 7 7
                  5 5 5 5 5
                  3 3 3 3 3
                  1 1 1 1 1 */
    int i=9,j;
    while(i>=1){
        j=1;
        while(j<=5){
            printf("%d ",i);
            j=j+1;
        }
        i=i-2;
        printf("\n");
    }
}