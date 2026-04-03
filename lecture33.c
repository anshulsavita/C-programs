#include<stdio.h>
void main(){
    /*Question--> 5 4 3 2 1
                4 3 2 1 
                3 2 1 
                2 1
                1  */
//     int i=5,j;
//     while(i>=1){
//     j=i;
//     while(j>=1){
//         printf("%d",j);
//         j=j-1;
//     }
//     i=i-1;
//     printf("\n");
// }

    /*Question--> 1 2 3 4 5
                  2 3 4 5 6
                  3 4 5 6 7
                  4 5 6 7 8 */
//     int i=1,j;
//     while(i<=4){
//     j=i;
//     while(j<=i+4){
//         printf("%d",j);
//         j=j+1;
//     }
//     printf("\n");
//     i=i+1;
// }

    /*Question--> 90 80 70 60
                  80 70 60 50
                  70 60 50 40
                  60 50 40 30 */
//     int i=90,j;
//     while(i>=60){
//     j=i;
//     while(j>=i-30){
//         printf("%d ",j);
//         j=j-10;
//     }
//     printf("\n");
//     i=i-10;
// }

    /*Question--> *****
                  *****
                  *****
                  ***** */
//     int i=1,j;
//     while(i<=5){
//     j=1;
//     while(j<=5){
//         printf("*");
//         j=j+1;
//     }
//     printf("\n");
//     i=i+1;
// }

    /*Question--> *
                  ***
                  *****
                  *******
                  ********* */
//     int i=1,j;
//     while(i<=9){
//     j=1;
//     while(j<=i){
//         printf("*");
//         j=j+1;
//     }
//     printf("\n");
//     i=i+2;
// }

   /* Question-->
               *
              ***
             *****
            *******
           *********  */
    int i=1,j,sps=15;
    while(i<=9){
    j=1;
    while(j<=sps){
        printf(" ");
        j=j+1;
    }
    j=1;
    while(j<=i){
        printf("*");
        j=j+1;
    }
    printf("\n");
    i=i+2;
    sps=sps-1;
}
}