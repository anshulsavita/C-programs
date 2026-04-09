#include<stdio.h>
void main(){
    // **Question --> input string in lower case and convert it into uppercase.
    // char x[30];
    // int i;
    // printf("Enter string:");
    // gets(x);
    
    // for(i=0;x[i];i++){
    //     if(x[i]>='a' && x[i]<='z'){
    //         x[i]=x[i]-32;
    //     }
    // }
    //   printf("%s",x);

    // **Question-->Write a c program to do tadel case (first character of every world becomes uppercase and remaining becomes lowercase.)
    // Ex-- This Is Taj.
    // char x[30];
    // int i;
    // printf("Enter string:");
    // gets(x);

    // if(x[0]>='a' && x[0]<='z'){
    //     x[0]=x[0]-32;
    // }
    // for(i=1;x[i];i++){
    //     if(x[i]==32){
    //         if(x[i+1]>='a' && x[i+1]<='z'){
    //             x[i+1]=x[i+1]-32;
    //         }
    //         i++;
    //     }
    //     else if(x[i]>='A' && x[i]<='Z'){
    //         x[i]=x[i]+32;
    //     }
    // } 
    // printf("%s",x);

    // **Question--> Write a c program to reverse the string.
    char x[30];
    int i,l=0;
    printf("Enter string:");
    gets(x);
    for(i=0;x[i];i++){
        l++;
    }
    for(i=l-1;i>=0;i--){
        printf("%c",x[i]);
    }
}
