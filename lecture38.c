#include<stdio.h>
void main(){
    /***Characters--> characters are numbers (Known as ascii value).
    ASCII->(american standared code information interchange).
    Each characters have some specific values known as ASCII value
    char             1 byte      -128 to +127
    unsigned char    1 byte      0-255

    A    65      a   97
    B    66      b   98
    Z    90      z   122

    space    32

    0        48
    1        49
    9        57

    properties of characters constants-->
    --always comes within single quotes--> char x='A';
    --returns ascii values

    char x='A';
    printf("%d",x);
    ***%c--> convert ascii into characters
    printf("%c",x); --> A
    printf("%c",x+32); --> a

    ex-->
    char x=65;
    printf("%d,%c",x,x); // --> 65,a

    char x;
    printf("Enter Characters:");
    scanf("%c",&x); // B
    printf("%d,%c",x,x); // --> 66,B 
    */

    // Question--> input any characters thru keyboard and check wheather its in upper case,
    // lower case, digit ,space or a special characters

    // char x;
    // printf("Enter Character:");
    // scanf("%c",&x);

    // if(x>=65 && x<=90){
    //     printf("Upper case");
    // }
    // else if(x>=97 && x<=122){
    //     printf("lowercase");
    // }
    // else if(x==32){
    //     printf("Its space");
    // }
    // else if(x<=57 && x>=48){
    //     printf("Digit");
    // }
    // else{
    //     printf("Special character");
    // }

    // Question--> convert lower case to upercase.
    // char x;
    // printf("Enter Character:");
    // scanf("%c",&x);

    // if(x>='a' && x<='z'){
    //     x=x-32;
    // }
    // printf("%c",x);

    // Question --> Swape case
    // char x;
    // printf("Enter character:");
    // scanf("%c",&x);

    // if(x>='a' && x<='z'){
    //     x=x-32;
    //     printf("%c",x);
    // }
    // else if(x>='A' && x<='Z'){
    //     x=x+32;
    //     printf("%c",x);
    // }
    // else{
    //     printf("%c",x);
    // }

    // question --> check vowel or consonent
    // char x;
    // printf("Enter character:");
    // scanf("%c",&x);

    // if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
    //         printf("It's vowel..");
    // }
    // else if(x>='a' && x<='z' || x>='A' && x<='Z'){
    //     printf("It's consonent..");
    // }
    // else{
    //     printf("Error..");
    // }

    //      *******or******
    char x;
    printf("Enter character:");
    scanf("%c",&x);
    if((x>='a' && x<='z') || (x>='A' && x<='Z')){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
            printf("Vowels");
        }
        else{
            printf("Consonent");
        }
    }
    else{
        printf("Not an alphabet...");
    }
}