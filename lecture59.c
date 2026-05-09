#include<stdio.h>
#include "lecture59.h"
// void main(){
//     int i;
//     double f;
//     i=sqr(100);
//     printf("%d\n",i);
//     f=factorial(5);
//     printf("%lf\n",f);
//     table(7);
//     address();
// }

// ***call by value--> in this technique, actual args copied their values in formal arge
// and what ever changes will make in formal args not affect the value of actual args.
// void swap(int a,int b){
//     int t=a;
//     a=b;
//     b=t;
// }
// void main(){
//     int a=10,b=20;
//     printf("%d,%d\n",a,b);
//     swap(a,b);
//     printf("%d,%d\n",a,b);
// }

// ***call by address/reference--> in this technique, actual args copied their address(reference) in formal args, and
// whatever changes will make in formal args will affect the values of actual args. 
// void swap(int *a,int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
// }
// void main(){
//     int a=10,b=20;
//     printf("%d,%d\n",a,b);
//     swap(&a,&b);
//     printf("%d,%d\n",a,b);
// }

#include"array.h"
void main(){
    int a[5],b[10];
    getArray(a,5);
    putArray(a,5);

    getArray(b,10);
    putArray(b,10);
}