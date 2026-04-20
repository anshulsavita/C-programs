#include<stdio.h>
void main(){
   /* ********pointers*********
        ----------------------
   - pointer is a special veriable which holdes the address of an
     memory variable/some memory spaces.

    what are address?
    -represents some memory block.
    -its size is 64 bit (8 bytes).
    -positive in nature.
    - & is used read an address of memory block.
    - Address+1 means proceed to next address.
    - adress are not integer value, these are HEXA code.

    syntax--> <type> *<ptr var>;
    int *x;
    char *x;
    
    * -->
        - to declare pointer variable.
        - after pointer declaration it means -  VALUE AT ADDRESS.
*/

// Examples -->
    int x=90,*p; //suppose base address of x is 100.suppose base address of p is 200.
    float y=786.18,*k; //suppose base address of y is 300 and base address of k is 400.

    // printf("%d,%d\n",sizeof(x),sizeof(p));
    // printf("%d,%d\n",sizeof(y),sizeof(k));

    printf("%u\n",x);//90 from our sopposes.// u is for unsigned(only positive value.), address are always positive.
    printf("%u\n",&x);//100
    printf("%x\n",&x);// address comes in hexa form.// x represents hexa form.
    printf("%u\n",*(&x));//90
    // printf("%u\n",*x);//error.
    p=&x; // p is a pointer variable which stores address of x. p points toward address of x.
    k=&y; // k points toward address of y.
    printf("%u\n",p);//100
    printf("%u\n",&p);//200
    printf("%u\n",*(&p));//100
    printf("%u\n",*p);//90
    printf("%u\n",**(&p));//90
    // printf("%u\n",**p);//error.
    // printf("%u\n",***(&p));//error.
    printf("%f\n",y);//786.18 // %u can not print float values.
    printf("%u\n",&y);//300
    printf("%f\n",*(&y));//786.18
    printf("%u\n",k);//300
    printf("%u\n",&k);//400
    printf("%u\n",*(&k));//300
    printf("%f\n",**(&k));//786.18
    // printf("%u\n",*y);//error.

}