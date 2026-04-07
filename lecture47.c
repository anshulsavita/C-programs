#include<stdio.h>
void main(){
    /* ****Strings***
    - group of characters
    Ex 
        Narayan,Gwalior
    - String always end with special character Null (ascii value is 0) or \0

    - String constant always comes with double quotes.
        "Ramayan"

    - String constant always return base address.
    Ex
        char x[]="Ramayan";
        int i;
        printf("%c",x[1]);  //a

        printf("\n%d",x[1]); //97
    
        printf("\n%c",x[1]-32); //A
        printf("\n%c",x[1]+1);  //b

        // %s read a string from begin address to null pointer.
    printf("%s",x); //Ramayan

    for(i=0;x[i];i++){
        printf("%c",x[i]); //Ramayan
    }

    // ***for taking string input.
    char x[30];
    printf("Enter string:");
    // ****scanf("%s",x); will not allow space between a string.
    gets(x);

    printf("%s",x); */

    // Question --> print length of a string.
    // char x[30],c=0,i;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     c++;
    // }
    // printf("%d",c);

    // ******or****
    // char x[30],c=0,i;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++);
    // printf("%d",i);

    // Question--> count how many times "(a) or (A)" comes in a string.
    // char x[30],c=0,i;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     if(x[i]=='a' || x[i]=='A'){
    //         c++;
    //     }
    // }
    // printf("%d",c);

    // Quiz--> write a c program to count how many upper case, lowercase, digits, spaces and special characters are present in a string.
    // char x[30],i;
    // int u=0,l=0,d=0,sps=0,s=0;
    // printf("Enter String:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     if(x[i]>='A' && x[i]<='Z'){
    //         u++;
    //     }
    //     else if(x[i]>='a' && x[i]<='z'){
    //         l++;
    //     }
    //     else if(x[i]>=48 && x[i]<=57){
    //         d++;
    //     }
    //     else if(x[i]==' '){
    //         sps++;
    //     }
    //     else{
    //         s++;
    //     }
    // }
    // printf("\nUpper case characters: %d",u);
    // printf("\nlower case characters: %d",l);
    // printf("\nDigits: %d",d);
    // printf("\nSpaces: %d",sps);
    // printf("\nspecial characters: %d",s);


    // Quiz--> Write a c program to count how many vowels and cosonents present in a string.
    char x[30];
    int i,v=0,c=0;
    printf("Enter a string:");
    gets(x);
    for(i=0;x[i];i++){
        if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z'))
        {
            if(x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' || x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Vowels: %d",v);
    printf("\nConsonents: %d",c);

    
}