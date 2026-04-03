#include<stdio.h>
void main(){
    // int x[10],y[10],z[10],i;
    // for(i=0;i<=9;i++){
    //     printf("Enter value:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=9;i++){
    //     printf("Enter value:");
    //     scanf("%d",&y[i]);
    // }
    // for(i=0;i<=9;i++){
    //     z[i]=x[i]+y[i];
    // }
    // for(i=0;i<=9;i++){
    //     printf("%d,",z[i]);
    // }

    // int x[5],y[5],i;
    // for(i=1;i<=4;i++){
    //     printf("Enter value:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=4;i++){
    //     y[i]=x[4-i];
    // }
    // for(i=0;i<=4;i++){
    //     printf("%d,",y[i]);
    // }

    // int x[5],y[3],z[8],i;
    // for(i=0;i<=4;i++){
    //     printf("Enter value of x:");
    //     scanf("%d",&x[i]);
        
    // }
    // for(i=0;i<=2;i++){
    //     printf("Enter value of y:");
    //     scanf("%d",&y[i]);
    // }
    // for(i=0;i<=4;i++){
    //     z[i]=x[i];
    // }
    // for(i=0;i<=2;i++){
    //     z[i+5]=y[i];
    // }
    // for(i=0;i<=7;i++){
    //     printf("%d,",z[i]);
    // }

    // **********orrr*****
    int x[5],y[3],z[8],i;
    for(i=0;i<=4;i++){
        printf("Enter value of x:");
        scanf("%d",&x[i]);
        
    }
    for(i=0;i<=2;i++){
        printf("Enter value of y:");
        scanf("%d",&y[i]);
    }
    for(i=0;i<=7;i++){
        if(i<=4){
            z[i]=x[i];
        }
        else{
            z[i]=x[i-5];
        }
        printf("%d,",z[i]);
    }
}