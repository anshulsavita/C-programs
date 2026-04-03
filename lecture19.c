#include<stdio.h>
void main(){
    // ***find-> 1,3,7,13,21,31
    // int s = 1,d=2;
    // abc:
    // printf("%d,",s);
    //     s=s+d;
    //     d=d+2;
    //     if(d<=12)
    //     {
    //         goto abc;
    //     } 

    // ***find-> 10,20,40,70,110,160
    // int s=10,d=10;
    // abc:
    // printf("%d,",s);
    // s=s+d;
    // d=d+10;
    // if(s<=160)
    // {
    //     goto abc;
    // }

    // ***find-> 7,14,21,28,35,42,49,56,63,70,77,84
    // int i=7,d=7;
    // abc:
    // printf("%d,",i);
    // i=i+d;
    // if(i<=100){
    //     goto abc;
    // }

// *****new type 
// find all those values which can be divisible by 7 till 100.
// int i =1;
// xyz:
//     if(i%7==0 || i%11==0)
//     {
//         printf("%d,",i);
//     }
//     i=i+1;

//     if(i<=100){
//         goto xyz;
//     }

// find the sum of all those values which can be divided by 7 till 100
int i =1, s=0;
xyz:

    if(i%7==0)
    {
        printf("%d+",i);
        s=s+i;
    }
    i=i+1;

    if(i<=100){
        goto xyz;
    }

    printf("\b=%d,",s);
}