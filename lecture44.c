#include<stdio.h>
void main(){
    // input five numbers in an array and find out the largest number.
    // int x[5],i;
    // for(i=0;i<=4;i++){
    //     printf("Enter number:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=4;i++){
    //     if(x[i]>x[1] && x[i]>x[2] && x[i]>x[3] && x[i]>x[4]){
    //         printf("%d",x[i]);
    //     }
    //     else if(x[i]>x[0] && x[i]>x[2] && x[i]>x[3] && x[i]>x[4]){
    //         printf("%d",x[i]);
    //     }
    //     else if(x[i]>x[0] && x[i]>x[1] && x[i]>x[3] && x[i]>x[4]){
    //         printf("%d",x[i]);
    //     }
    //     else if(x[i]>x[0] && x[i]>x[1] && x[i]>x[2] && x[i]>x[4]){
    //         printf("%d",x[i]);
    //     }
    //     else if(x[i]>x[0] && x[i]>x[1] && x[i]>x[2] && x[i]>x[3]){
    //         printf("%d",x[i]);
    //     }
    // }

    // *****or*****
    // int x[5],i,max;
    // for(i=0;i<=4;i++){
    //     printf("Enter number:");
    //     scanf("%d",&x[i]);
    // }
    // max=x[0];
    // for(i=1;i<=4;i++){
    //     if(x[i]>max){
    //         max=x[i];
    //     }
    // }
    // printf("%d",x[i]);

    // ****sorting-->
        // -bubble sort:-

    int x[5],i,t,j;
    for(i=0;i<=4;i++){
        printf("Enter value for @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(x[j]>x[j+1]){
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    printf("\nSorted elements are:\n");
    for(i=0;i<=4;i++){
        printf("%d,",x[i]);
    }
}