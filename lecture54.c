#include<stdio.h>
void main(){
    // *******pointer to pointer***
    //  - use to store an adress of pointer 

    // int a=90,*p,**k;
    // suppose balue  of a is 90 and base address is 100, and base address of p is 722 and p points to a means base address of a is stored in p.
    // base address of k is 822, and k points to k as followes.  

    // p=&a;
    // k=&p;
    // printf("%u\n",a);//90
    // printf("%u\n",&a);//100
    // // printf("%u\n",*a)//error.
    // printf("%u\n",*(&a));//100
    // // printf("%u\n",**(&a));//error
    // printf("%u\n",p);//100
    // printf("%u\n",&p);//722
    // printf("%u\n",*(&p));//100
    // printf("%u\n",*p);//90
    // printf("%u\n",**(&p));//90
    // printf("%u\n",k);//722
    // printf("%u\n",&k);//822
    // printf("%u\n",*(&k));//722
    // printf("%u\n",**(&k));//100
    // printf("%u\n",***(&k));//90
    // printf("%u\n",*k);//100
    // printf("%u\n",**k);//90

    // suppose value of a is 90 and its address is 100, and p points to a whose base address is 722.
    // p=&a;
    // printf("%u\n",p);//100
    // printf("%u\n",*p);//90
    // p=p+1;
    // printf("%u\n",p);//104
    // p=p+1;
    // printf("%u\n",p);//108

    // int a[]={5,7,8,9,10};
    // when no subscript define with an array, it will print base address.
    // [] / * --> these both use for VALUE AT ADDRESS.
    // printf("%u\n",a);//100
    // printf("%u\n",a[1]);//7
    // printf("%u\n",a[0]);//5
    // printf("%u\n",*a);//5
    // printf("%u\n",*a+1);//6
    // printf("%u\n",*(a+1));//7

    char a[]="Gwalior";
    printf("%u\n",a);//100
    printf("%u\n",a[2]);//97
    printf("%c\n",a[2]);//a
    printf("%s\n",a);//Gwalior
    printf("%c\n",a[2]);//a
    printf("%c\n",*a);//G
    printf("%c\n",*a+1);//H
    printf("%c\n",*(a+1));//w
    printf("%s\n",a+2);//alior






    


}