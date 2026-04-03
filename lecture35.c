#include<stdio.h>
// -pre conditional looping
// **while loop-->
// while(exp){
//     ==
//     ==
// }

// -post conditional looping
// **do_while loop --> 
// ***Syntex***
/*do{
    ==
    ==
    [break]
    [continue]
}while(exp);*/

void main(){
    // int i,n,t,ch;

//     do{
//     i=1;
//     printf("Enter any number:");
//     scanf("%d",&n);
//     i=1;
//     while(i<=10){
//         t=n*i;
//         printf("%dx%d=%d\n",n,i,t);
//         i++;
//     }
//     printf("Do u want to print another table 1-yes, 0-no?");
//     scanf("%d",&ch);
// }while(ch==1);

// **Switch and case--> This statement is used to execute group of task or instructions according to specified case constant.
// ***Syntax***
/*switch (<var>){
    case <constant>:
    ====
    ====
    [break]
    case <constant>:
    ====
    ====
    [break]
    case <constant>:
    ====
    ====
    [break]
    default:
    ====
    ====
}*/
    int ch,i,f,n;
    do{
        printf("Main Menu\n");
        printf("1:Even Number\n2:Factorial\n3:)dd Number\n4:Exit\n");
        printf("Enter ur choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            i=2;
            while(i<=10){
                printf("%d,",i);
                i=i+2;
            }
            break;
            case 2:
            printf("Enter Any number:");
            scanf("%d",&n);
            f=1;
            while(n>1){
                f=f*n;
                n=n-1;
            }
            printf("Factorial:%d\n",f);
            break;
            case 3:
            i=1;
            while(i<=10){
                printf("%d,",i);
                i=i+2;
            }
            break;
            case 4:
            printf("Good Bye...");
            break;
            default:
            printf("Wrong option..."); 
        }
        printf("\n");
        printf("\n");
    }while(ch!=4);
}


