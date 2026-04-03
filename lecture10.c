#include<stdio.h>
void main(){
    // float rate,qty,amt;
    // printf("Enter Rate:");
    // scanf("%f",&rate);

    // printf("Enter qty:");
    // scanf("%f",&qty);

    // amt=rate*qty;

    // printf("Amount is:%.2f",amt);

    // *****Quize*****

    // float p,r,t,si;
    // printf("Enter Principle amount:");
    // scanf("%f",&p);

    // printf("Enter rate:");
    // scanf("%f",&r);

    // printf("Enter time:");
    // scanf("%f",&t);

    // si=(p*r*t)/100;

    // printf("Simple interest is:%.2f",si);

    // *****2nd quize***

    float p,c,m,t,per;
    printf("Enter Physics marks:");
    scanf("%f",&p);

    printf("Enter Chemistry marks:");
    scanf("%f",&c);

    printf("Enter Maths marks:");
    scanf("%f",&m);

    t=p+c+m;
    printf("Total marks is:%.2f\n",t);

    per=t/3;
    printf("percentage is:%.2f",per);
}