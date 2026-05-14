#include<stdio.h>
#include<stdlib.h>
void main(){
    int ch;
    char fake;
    do{
    system("cls"); //--> means clear screen.
    printf("Main Menu\n");
    printf("1] Add New Employee\n");
    printf("2] Show All Employee\n");
    printf("3] Search Employee\n");
    printf("4] Exit\n");
    printf("Enter choice: ");
    fflush(stdin);
    scanf("%d",&ch);
    system("cls"); //--> means clear screen.
    switch(ch){
        case 1:
            system("Insertemployee.exe"); // system means os(operating system). this will allow it to run this file in code.
            break;
        case 2:
            system("Showemployee.exe");
            break;
        case 3:
            system("searchemployee.exe");
            break;
        case 4:
            printf("Good Bye...");
            break;
        default:
            printf("Wrong option...");
            break;
    }
    printf("\t\t\tPress Enter to conti...\n");
    fflush(stdin);
    scanf("%c",&fake);
}while(ch!=4);
}