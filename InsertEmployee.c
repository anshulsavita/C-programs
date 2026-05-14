#include<stdio.h>
typedef struct Employee{
    int id;
    char name[30];
    float salary; 
}EMP;  
// (.)--> means member
void main(){
    char ch;
    EMP E;
    FILE *p;
    p=fopen("employee.db","r");
    if(p==NULL){
        p=fopen("employee.db","w");
    }
    else{
        p=fopen("employee.db","a");
    }
    do{
        printf("Enter Employee Id:");
        scanf("%d",&E.id);
        printf("Enter Employee Name:");
        fflush(stdin); //keyboard ki memory ko flush karne ke liye.// always before string after int.
        gets(E.name);
        printf("Enter Employee Salary:");
        scanf("%f",&E.salary);

        fwrite(&E,sizeof(E),1,p);

        printf("Add more Employee y/n?");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');

}