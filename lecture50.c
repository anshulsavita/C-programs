#include<stdio.h>
#include<string.h>
void main(){
    // ****String functions** --> header file #include<string.h>
    
    // ****int strlen(s)--> to find out the length of string.
    // char x[30];
    // int l;
    // printf("Enter string:");
    // gets(x);
    // l=strlen(x);
    // printf("%d",l);

    // ****void strcpy(s1,s2) --> copy s2 in s1
    // char x[30],y[30]; // to copy
    // printf("Enter string:");
    // gets(x);
    // strcpy(y,x);
    // printf("%s",y);

    // ***void strcat(s1,s2) --> add s2 in s1;
    // char x[30],y[30],z[30];
    // printf("Enter first string:");
    // gets(x);
    // printf("Enter second string:");
    // gets(y);
    // strcpy(z,x);
    // strcat(z," ");
    // strcat(z,y);
    // printf("%s",z);

    // void strrev(s) --> revers the string;
    char x[30];
    printf("Enter string:");
    gets(x);
    strrev(x);
    printf("%s",x);

    // ****void strupr(x)--> lower case to upper case;
    // ****void strlwr(x)--> upper case to lower case;
    // ****int strcmp(s1,s2)--> study in next class...
    

}