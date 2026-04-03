#include<stdio.h>
void main(){

    // ***Q-> 1,1,1,2,4,8,3,9,27,4,16,64,5,25,125****

    // int i=1,s,c;
    // abc:
    //     printf("%d,",i);
    //     s = i*i;
    //     printf("%d,",s);
    //     c = i*i*i;
    //     printf("%d,",c);
    //     i = i+1;
    //     if(i<=5){
    //         goto abc;
    //     }

    // **Q->7,10,15,18,23,26,31,34
    // int i = 7;
    // xyz:
    //     printf("%d,",i);
    //     i = i +3;
    //     printf("%d,",i);
    //     i = i + 5;
    // if(i<=34){
    //     goto xyz;
    // }

    // int i = 90;
    // xyz:
    //     printf("%d,",i);
    //     i = i -5;
    //     printf("%d,",i);
    //     i = i - 10;
    // if(i>=55){
    //     goto xyz;
    // } 

    int i = 1,n,t;
    printf("Enter the number: ");
    scanf("%d",&n);

    xyz:
        t = n*i;
        printf("%dX%d=%d,\n",n,i,t);
        i=i+1;
        if(i<=10)
        {
            goto xyz;
        }
}
