#include<stdio.h>
void main(){
    // Question-->print alphabets for a to z.
    // char x;
    // for(x='A';x<='Z';x++){
    //     printf("%c ",x);
    // }

    // Question-->print all the characters.
    // int x;
    // for(x=0;x<=255;x++){
    //     printf("%d-%c ",x,x);
    // }

    /*Question-->   A
                    AB
                    ABC
                    ABCD
                    ABCDE  */
    // char i,j;
    // for(i='A';i<='E';i++){
    //     for(j='A';j<=i;j++){
    //         printf("%c",j);
    //     }
    //     printf("\n");
    // }

    /*Question-->   ABCDE
                    BCDE
                    CDE
                    DE
                    E  */
    // char i,j;
    // for(i='A';i<='E';i++){
    //     for(j=i;j<='E';j++){
    //         printf("%c",j);
    //     }
    //     printf("\n");
    // }

    /*Question-->   ABCDEFEDCBA
                    ABCDE EDCBA
                    ABCD   DCBA
                    ABC     CBA
                    AB       BA
                    A         A  */
    char i,j,sps=1;
    for(i='F';i>='A';i--){
        for(j='A';j<=i;j++){
            printf("%c",j);
        }
        if(i!='F'){
            for(j=1;j<=sps;j++){
            printf(" ");
        }
        sps=sps+2;
        }
        if(i=='F'){
            for(j=i-1;j>='A';j--){
                printf("%c",j);
            }
        }
        else{
            for(j=i;j>='A';j--){
                printf("%c",j);
            }
        }
        printf("\n");
    }   
}