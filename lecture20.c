#include<stdio.h>

// *****Multiple if condition --> when choice are multiple and selection is single.
void main(){
    // int w;
    // printf("Enter weight:");
    // scanf("%d",&w);

    // if(w>=1000){
    //     printf("Transport mode will be train..");
    // }

    // else if(w>=500 && w<=999){
    //     printf("Transport mode will bw truck.. ");
    
    // }
    // else if(w>=100 && w<=499){
    //     printf("Transport moce will be mini truck..");
    // }

    // else{
    //     printf("Invalid weight...");
    // }

    int p;
    printf("Enter Percentage:");
    scanf("%d",&p);

    if(p>=80 && p<=100){
        printf("You got Grade A");
    }

    else if(p>=60 && p<=79){
        printf("You got Grade B ");
    
    }
    else if(p>=40 && p<=59){
        printf("You got Grade c");
    }

    else if(p>=0 && p<=39){
        printf("You got Grade D");
    }

    else{
        printf("Percentage is invalid");
    } 
    
    float qty,rate,amt,dis,na;
    printf("Enter Rate:");
    scanf("%.2f",&rate);

    printf("Enter Quantity:");
    scanf("%.2f",&qty);

    amt=qty*rate;
    if(amt>=100000){
        printf("20%% discount..");
        dis=amt*20/100;
    }
    
}

