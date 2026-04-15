#include<stdio.h>
#include<string.h>
void main(){
    // ****int strcmp(s1,s2)--> To compare, like AMIT, zee
    // s1>s2     positive.
    // s1<s2     negative.
    // s1==s2    0

    // ****int strcmpi(s1,s2)--> does not count uppercase and lowercase.
    // ex-->
    // char x[30];
    // int i;
    // i=strcmp("AMIT","AMAR");
    // printf("%d",i);

    // ***program for case sencitive-->
    // char x[30];
    // printf("Enter your city:");
    // gets(x);
    // if(strcmpi(x,"Gwalior")==0){
    //     printf("green city...");
    // }
    // else{
    //     printf("Nice city..");
    // }

    // Question--> write a c program to find any string is palindrom or not by using string functions.
    // char x[30],y[30];
    // printf("Enter name:");
    // gets(x);
    // strcpy(y,x);
    // strrev(y);
    // if(strcmpi(x,y)==0){
    //     printf("Palindrom...");
    // }
    // else{
    //     printf("Not a palindrom..");
    // }

    // ****Multi dimension or two dimension**
    // Suntax--> <type> <var>[rows][cols]
    int x[3][5];
    int i,j,s=0;
    for(i=0;i<=2;i++){
        for(j=0;j<=4;j++){
            printf("Enter value @ %d,%d:",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        s=0;
        for(j=0;j<=4;j++){
            printf("%d ",x[i][j]);
            s=s+x[i][j];
        }
        printf(" %d \n",s);
    }

}