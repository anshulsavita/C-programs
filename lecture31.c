#include<stdio.h>
void main(){

    /*Question--> 10 20 30 40 50
                  10 20 30 40 50
                  10 20 30 40 50
                  10 20 30 40 50
                  10 20 30 40 50 */
    // int i=1,j;
    // while(i<=5){
    // j=10;
    // while(j<=50){
    //     printf("%d ",j);
    //     j=j+10;
    // }
    // i=i+1;
    // printf("\n");
    // }

    /*Question--> 10 10 10 10 10
                  20 20 20 20 20
                  30 30 30 30 30
                  40 40 40 40 40
                  50 50 50 50 50 */
    // int i=10,j;
    // while(i<=50){
    // j=1;
    // while(j<=5){
    //     printf("%d ",i);
    //     j=j+1;
    // }
    // i=i+10;
    // printf("\n");
    // }

    /*Question--> 1 0 1 0 1 0 1 0 1
                  1 0 1 0 1 0 1 0 1
                  1 0 1 0 1 0 1 0 1
                  1 0 1 0 1 0 1 0 1
                  1 0 1 0 1 0 1 0 1 */
    // int i=1,j;
    // while(i<=5){
    // j=1;
    // while(j<=9){
    //     printf("%d ",j%2);
    //     j=j+1;
    // }
    // i=i+1;
    // printf("\n");
    // }

    /*Question--> 1 1 1 1 1
                  0 0 0 0 0
                  1 1 1 1 1
                  0 0 0 0 0
                  1 1 1 1 1 */
    // int i=1,j;
    // while(i<=5){
    // j=1;
    // while(j<=5){
    //     printf("%d ",i%2);
    //     j=j+1;
    // }
    // i=i+1;
    // printf("\n");
    // }

    /*Question--> # @ # @ # @ # 
                  # @ # @ # @ #
                  # @ # @ # @ #
                  # @ # @ # @ #
                  # @ # @ # @ # */
    // int i=1,j;
    // while(i<=5){
    // j=1;
    // while(j<=7){
    //     if(j%2==0){
    //         printf("@ ");
    //     }
    //     else{
    //         printf("# ");
    //     }
    //     j=j+1;
    // }
    // i=i+1;
    // printf("\n");
    // }

    /*Question--> 90 90 90 90 90 
                  70 70 70 70 70
                  50 50 50 50 50
                  30 30 30 30 30
                  10 10 10 10 10 */
    int i=90,j;
    while(i>=10){
        j=1;
        while(j<=5){
            printf("%d ",i);
            j=j+1;
        }
        i=i-20;
        printf("\n");
    }
}