#include<stdio.h>
void main(){
    float i,da,hra,pf,na;
    printf("Enter the salary: ");
    scanf("%f",&i);

    if(i>=100000){
        da=i*20/100;
        hra=i*16/100;
        pf=i*12/100;
        na=i+da+hra-pf;
        printf("da: %.2f\n",na);
        printf("hra: %.2f\n",na);
        printf("pf: %.2f\n",na);
        printf("net salary: %.2f\n",na);
    }
    else if(i>=50000 && i<=99999){
        da=i*15/100;
        hra=i*10/100;
        pf=i*12/100;
        na=i+da+hra-pf;
        printf("da: %.2f\n",na);
        printf("hra: %.2f\n",na);
        printf("pf: %.2f\n",na);
        printf("net salary: %.2f\n",na);
    }
    else if(i>=20000 && i<=49999){
        da=i*10/100;
        hra=i*8/100;
        pf=i*12/100;
        na=i+da+hra-pf;
        printf("da: %.2f\n",na);
        printf("hra: %.2f\n",na);
        printf("pf: %.2f\n",na);
        printf("net salary: %.2f\n",na);
    }
    else{
        printf("invalid salary: %.2f",na);
    }

    // numeric123 8,9,10,11





}