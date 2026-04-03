#include<stdio.h>
// void main()
// {
//     printf("Hello Students...");
// }

// *****conversion specifier ***** 
// --> kisi bhi variable ki value ko print karane ke liye ham conversion specifier ka use karte hai.

void main(){
    int a = 10, b =50,c;
    c=a+b;
    printf("%d,%d,%d\n",a,b,c); //%d --> conversion specifier

    printf("Total is %d\n",c);

    printf("Sum of %d and %d is %d\n",a,b,c);

    printf("Sum of %d and %d is %d\n",b,c,a);

    printf("%d+%d=%d\n",a,b,c);

    printf("Addition:%d\n",c);

    c=a*b;
    printf("Multiply:%d\n",c);

    c=a-b;
    printf("Subtraction:%d\n",c);

    // ******scanf()*****
    // --> use to input a value through keyboard at the time of program execution(header file: studio.h)
    // syntax --> scanf("<conversion specifier>",&<var_list>);

    // &--> addressof, put value in memory for specified variable
    // Ex--> int a;
    //       scanf("%d",&a);
// }

// void main(){
//     int a,b,c;
//     printf("Enter first number:");

//     scanf("%d",&a);
//     printf("Enter second number:");
    
//     scanf("%d",&b);
//     c = a+b;
//     printf("Addition %d\n",c);
}
