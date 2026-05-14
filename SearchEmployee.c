#include<stdio.h>
typedef struct Employee{
    int id;
    char name[30];
    float salary; 
}EMP;  
// (.)--> means member
void main(){
    
    EMP E;
    FILE *p;
    int eid,found=0;
    float da,hra,ns;
    p=fopen("employee.db","rb"); // "r"--> text mode, "rb"--> binary mode
    if(p==NULL){
        printf("File not found....");
    }
    else{
        printf("Enter Employee Id:");
        scanf("%d",&eid);

        printf("\t\t\tEmployee List\n");
        printf("-----------------------------------------------------------------------------\n");
        printf("Id\tName\tSalary\t\tDA(30%%\t\tHRA(15%%)\tNetSalary\n");
        printf("-----------------------------------------------------------------------------\n");

        while(!feof(p)){
            fread(&E,sizeof(E),1,p);
            if(feof(p)) break;
            if(eid==E.id){
                
            da=E.salary*30/100;
            hra=E.salary*15/100;
            ns=E.salary+da+hra;
            printf("%d\t%s\t%.2f\t%8.2f\t%8.2f\t%8.2f\n",E.id,E.name,E.salary,da,hra,ns);
            
            found=1;
            break;
        }
    }
        if(found==0){
            printf("\t\t\tEmployee not found %d\n",eid);
        }
        
    }
    fclose(p);

}