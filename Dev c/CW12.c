#include<stdio.h>
void main(){
    int i=1,s,c;
    abc:
        printf("%d,",i);
        s = i*i;
        printf("%d,",s);
        c = i*i*i;
        printf("%d,",c);
        i = i+1;
        if(i<=5){
            goto abc;
        }
}
