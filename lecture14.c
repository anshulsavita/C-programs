#include<stdio.h>
void main(){

    // ******single if condition****
    // int a, b,c;
    // printf("Enter the first value: ");
    // scanf("%d",&a);

    // printf("Enter the second value: ");
    // scanf("%d",&b);

    // if(a>b)
    // {
    //     c=a-b;
    // }
    // else
    // {
    //     c=b-a;
    // }

    // printf("Result:%d",c);

    //  float r,q,amt,d,na;
    // printf("Enter Rate: ");
    // scanf("%f",&r);

    // printf("Enter Quantity: ");
    // scanf("%d",&q);

    // amt=r*q;
    // printf("Amount %.2f\n",amt);

    // if(amt>=10000)
    // {
    //     printf("20%% Discount...\n",amt);
    //     d=amt*20/100;
    // }
    // else
    // {
    //     printf("10%% Discount...\n");
    //     d=amt*10/100;
    // }

    // printf("Discount:%.2f",d);

    // na=amt-d;
    // printf("Net Amount:%.2f\n",na);

     float s,as,tax,nas;
    printf("Enter the salary: ");
    scanf("%f",&s);

    as=s*12;
    printf("Annual salary %.2f\n",as);

    if(as>=500000)
    {
        printf("30%% Tax...\n",tax);
        tax=as*30/100;
    }
    else
    {
        printf("10%% Tax...\n",tax);
        tax=as*10/100;
    }

    printf("Tax:%.2f\n",tax);

    nas=as-tax;
    printf("Net Annual salary is:%.2f\n",nas);



}