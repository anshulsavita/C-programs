#include<stdio.h>
#include<stdlib.h>
typedef struct Employee{
    int id;
    char name[30];
    float salary; 
}EMP;  
// (.)--> means member
void main(){
    
    EMP E;
    FILE *p,*t;
    int eid,found=0,f;
    float da,hra,ns;
    p=fopen("employee.db","rb"); // "r"--> text mode, "rb"--> binary mode
    t=fopen("temp.db","w");
    if(p==NULL){
        printf("File not found....");
    }
    else{
        printf("Enter Employee Id u want to Edit:");
        scanf("%d",&eid);

       
        while(!feof(p)){
            fread(&E,sizeof(E),1,p);
            if(feof(p)) break;
            if(eid==E.id){
              printf("Employee Details.....\n");
              printf("Employee Id: %d\n",E.id);

              printf("1] Name %s\n",E.name);
              printf("2] Salary %.2f\n",E.salary);
              printf("3] Exit\n");
              printf("Enter field u want to Edit:");
              scanf("%d",&f);
            switch(f){
                case 1:
                    printf("Enter New Name:");
                    gets(E.name);
                    break;
                case 2:
                    printf("Enter New Salary:");
                    scanf("%f",&E.salary);
                    break;
                case 3:
                    break;
                default:
                    printf("Wrong option:");
            }
            found=1;
        }
        fwrite(&E,sizeof(E),1,t);
    }
        if(found==0){
            printf("\t\t\tEmployee not found %d\n",eid);
        }
        
    }
    fclose(p);
    fclose(t);
    remove("employee.db");
    rename("temp.db","employee.db");

}