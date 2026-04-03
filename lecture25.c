#include<stdio.h>
void main(){
        // *****while loop-> is conditional looping.

    // syntax-> 
    // while(exp){
    //     [break]
    //     [continous]
    // }

    // example->
    // int i = 1;
    // while(i<=5)
    // {
    //     printf("%d",i);
    //     i=i+1;
    // }

//    int i=1;
//    while(i<=1000){
//     printf("%d",i);
//     i=i*10;
//    } 

//    int i=2,d=4;
//    while(i<=22){
//     printf("%d ",i);
//     i=i+6;
//     printf("%d ",d);
//     d=d+6;
//    }

//  Quize->***input date thru keyboard and check weather its valid or invalid***
    int d,m,y;
    printf("Enter date: ");
    scanf("%d%d%d",&d,&m,&y);

    if(y>0){
        printf("year is valid..\n");
        if(y%400==0){
            if(m>0 && m<=12){
                if(m==2){
                    printf("month is valid..\n");
                    if(d>0 && d<29){
                        printf("date is valid..\n");
                    }
                    else {
                        printf("invalid date");
                    }
                }
                else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
                    printf("Month is valid..\n");
                        if(d>0 && d<31){
                            printf("date is valid..\n");
                        }
                        else{
                            printf("Date is invalid..\n");
                        }
                }
                else{
                    if(d>0 && d<30){
                    printf("date is valid..\n");
                    }
                    else{
                        printf("date is invalid..\n");
                    }
                }
        }
        else{
            printf("months is invalid..\n");
        }
    }
        else{
            if(m>0 && m<12){
                if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
                    printf("month is valid..\n");
                    if(d>0 && d<31){
                    printf("date is valid..\n");
                    }
                    else{
                        printf("invalid date\n");
                    }
                }
                else if(m==2){
                    printf("month is valid..\n");
                    if(d>0 && d<28){
                    printf("date is valid..\n");
                    }
                    else{
                        printf("date is invalid..\n");
                    }
                }
                else{
                    printf("month is valid..\n");
                    if(d>0 && d<30){
                    printf("date is valid..\n");
                    }
                    else{
                        printf("date is invalid..\n");
                    }
                }
            }
            else{
                printf("month is invalid\n");
            }
        }
    }
else{
    printf("Year is invalid..\n");
}
}
