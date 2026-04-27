#include<stdio.h>
#include<math.h>    // correct for fabs()
#include<stdlib.h>   // correct for abs()
#include<ctype.h>  // for characters

void main(){
    // *****Function-->
    // function are used to divide a large program in a small module.
    // one call function anytime anywhere in a program multiple times thus it provides reusability of code

    // there are two types of functions.
    //  - buit in function.
    //  - user defined function.

    // ****built in functions --> header file --> <math.h>
    
    // ** int abs(int) -->absolute
    // return positive value only.
    // Example-- c=abs(-100) //100
    // int a =-90,b;
    // b=abs(a);
    // printf("%d",b);

    // **float fabs(float)
    // float a=-90.4,b;
    // b=fabs(a);
    // printf("%f",b);

    // **long labs(long)
    // long a=-90,b;
    // b=labs(a);
    // printf("%ld",b);

    // float sin(float) --> always give input in radian.
    // float a=90*3.14/180,b;
    // b=sin(a);
    // printf("%f",b);

    // float cos(float) --> always give input in radian.
    // float a=90*3.14/180,b;
    // b=cos(a);
    // printf("%f",b);

    // float atn(float) --> always give input in radian.
    // float a=90*3.14/180,b;
    // b=atan(a);
    // printf("%f",b);

    // float log(float)
    // float a=30,b;
    // b=log(a);
    // printf("%f",b);

    // float log10(float)
    // float a=1000,b;
    // b=log10(a);
    // printf("%f",b);

    // int ceil(float)--> return nearest highiest integer.
    // float a=77.1;
    // int b;
    // b=ceil(a);
    // printf("%d",b);

    // int floor(float)
    // float a=30.5;
    // int b;
    // b=floor(a);
    // printf("%d",b);

    // float exp(float) --> exponential
    // float a=30,b;
    // b=exp(a);
    // printf("%f",b);

    // *****character function-->header file <ctype.h>
    // char toupper(char)--> convert uppercase into lowercase.
    // char x='A',y;
    // y=tolower(x);
    // printf("%c",y);

    // char toupper(char) --> convert lower to upper.

    // int isupper(char) --> return none zero(true) if specified char is in upper case otherwise zero.
//     char x='A';
//     int y;
//     y=isupper(x);
//     printf("%d",y);
// // **or**
//     if(isupper(x)){
//         printf("Yes!!");
//     }
//     else{
//         printf("noooo..");
//     }

    // int islower(), isdigit(),isalpha(),isalnum()-->alphanumeric(alphabet+digit), ispunct()--> puntitation(.,';-)){})
    char x=',';
    if(ispunct(x)){
        printf("Yes!!");
    }
    else{
        printf("noooo..");
    }
}