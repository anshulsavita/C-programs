#include<stdio.h>
/* 
***Structure--> structure are use to create record type variable.
Ex student,,customer,Employee.
structure holds data hetrogeneous in nature.
while arrays hold data homogeneous in nature.
* to create structure one can use 
 -syntax 
     [<typedef>] struct <tagname>{
         ===
         === data
}<var name>;

struct Employee
{
    int id;
    char name[30];
    float salary;
}E1,E2,E3; // these are three variables which contain id,name,salary.

********or*******

struct Employee
{
    int id;
    char name[30];
    float salary;
};
struct Employee E1,E2,E3;

******or*********
typedef struct Employee{
    int id;
    char name[30];
    float salary; 
}EMP;  // now EMP becomes a type by using which we can define variables. inside EMP we have id,name,salary.

EMP E1,E2,E3;
*/

typedef struct Employee{
    int id;
    char name[30];
    float salary; 
}EMP;  
// (.)--> means member
void main(){
    EMP E[3];
    int i;
    for(i=0;i<=2;i++){
        printf("Enter Employee Id:");
        scanf("%d",&E[i].id);
        printf("Enter Employee Name:");
        fflush(stdin); //keyboard ki memory ko flush karne ke liye.// always before string after int.
        gets(E[i].name);
        printf("Enter Employee Salary:");
        scanf("%f",&E[i].salary);
    }
    for(i=0;i<=2;i++){
        printf("%d\t\t%s\t\t%.2f\n",E[i].id,E[i].name,E[i].salary);
    }

}
/*
***file handling-->
- use to store the input data permanently in secondary storage device[hdd,ssd,pd].
following functions are use to maintain data in files:

- fopen() use to open a file in various modes.
        "w" (write)
        this mode first create a specifiesd file and open it into write mode
        when file is successfully created by this mode it will return the
        base address of file to file pointer otherwise it will return NULL.

        "r"(read)
        this mode first search the specified file, if file exist it open it into read mode
        and return the base address file to file pointer. otherwise it will return NULL.

        "a"(append)
        append the record at end of file. first file open in write mode and then it will open in append mode.

        syntax:
             <fp>=fopen("Filename","mode")
             FILE *p;
             p=fopen("emp.db","w");

- File pointer(fp)-->
 use to store an address of file
FILE *p;

- fwrite()
     this function read data from memory variable (a,b,x,y) and write it into file.
     fwrite(&<varname>,sizeof(<varname>),<no of records>,<fp>)

- fread()
     this function read data from file and write it into memory variable (a,b,x,y).
     fread(&<varname>,sizeof(<varname>),<no of records>,<fp>)

- int feof(<fp>) --> return true (1) at end of file otherwise zero(0).

- fclose(<fp>) --> close the file

***this is for a project name Employee management system.
---I am creating few more file for this lecture are as followes.
1. InsertEmployee.c
2. employee.db // --> in code
3. ShowEmployee.c
4. SearchEmployee.c
5. bind.c

mini project--> student management system.
struct student {
int Rollno
char name[30]
int p,c,m
} 

insert, display --> pcm total and percentage, search.
*/