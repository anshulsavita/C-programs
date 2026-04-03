#include<stdio.h>
void main(){
    // int x[10],i,n,po;
    // for(i=0;i<=8;i++){
    //     printf("Enter number @ %d:",i);
    //     scanf("%d",&x[i]);
    // }
    // printf("Enter position:");
    // scanf("%d",&po);
    // printf("Enter number:");
    // scanf("%d",&n);
    // for(i=8;i>=po;i--){
    //     x[i+1]=x[i];
    // }
    // x[po]=n;
    // for(i=0;i<=9;i++){
    //     printf("%d,",x[i]);
    // }

    int x[10],i,n,po;
    for(i=0;i<=9;i++){
        printf("Enter number @ %d:",i);
        scanf("%d",&x[i]);
    }
    printf("Enter position:");
    scanf("%d",&po);

    for(i=po;i<=8;i++){
        x[i]=x[i+1];
    }
    for(i=0;i<=8;i++){
        printf("%d,",x[i]);
    }
}