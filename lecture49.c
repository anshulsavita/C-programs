#include<stdio.h>
void main(){

    // **Question--> input a string and copy it in another array.
    // char x[30],y[30];
    // int i;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     y[i]=x[i];
    // }
    // y[i]=x[i];
    // printf("%s",y);

    // **Question--> input two strings and combined them as a single unit.
    // char x[30],y[30],z[30];
    // int i,j=0;
    // printf("Enter first string:");
    // gets(x);
    // printf("Enterr second string:");
    // gets(y);
    // for(i=0;x[i];i++){
    //     z[i]=x[i];
    // }
    // z[i]=' ';
    // i++;
    // for(j=0;y[j];j++){
    //     z[i]=y[j];
    //     i++;
    // } 
    // z[i]=y[j];
    // printf("%s",z);
    
    // **Question--> input a string as a name and print first latter of every world but keep last word complete. 
    char x[30];
    int i,j;
    printf("Enter string:");
    gets(x);
    printf("%c.",x[0]);
    for(i=1;x[i];i++){
        if(x[i]==' '){
            printf("%c.",x[i+1]);
            j=i; 
        }
    }
    printf("\b");
    for(j=j+2;x[j];j++){
        printf("%c",x[j]);
    }
}