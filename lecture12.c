#include<stdio.h>
void main(){
    // float r, v, a;
    // printf("Enter the radius of sphere: ");
    // scanf("%f",&r);

    // v=(4.0/3.0)*3.14*r*r*r;
    // printf("Volume of sphere is: %.2f\n",v);

    // a=4*3.14*r*r;
    // printf("Area of sphere is: %.2f\n",a);

    //**Quize--> input basic salary through keyboard and find out da(daily allowance),
    //  hra(House rant allowance),pf, da 56% of salary, hra 16% salary, pf 12% of salary.
    //  Now calculate net salary at last*/

    float bs, da, hra, pf, ns;
    printf("Enter the basic salary: ");
    scanf("%f",&bs);

    da=(bs*56)/100;
    printf("Daily allowance is: %.2f\n",da);

    hra=(bs*16)/100;
    printf("House rent allowance is: %.2f\n",hra);

    pf=(bs*12)/100;
    printf("pf is: %.2f\n",pf);

    ns=bs+da+hra-pf;
    printf("Net salary is: %.2f\n",ns);
}