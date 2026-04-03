    // ******Nested if condition-->
    // syntax--> 
    /*if(exp){
        ===
        ===
    if(exp){
         ===
        ===
    if(exp){
        target
    }
        else{
            ==
            ==
        } 
    }
        else{
            ==
            ==
        }
    }
        else{
            ==
            ==
        }*/ 
#include<stdio.h>
void main(){

    // int a,h,e,i;
    // printf("Enter Age: ");
    // scanf("%d",&a);

    // if(a>=19 && a<=25){
    //     printf("Age is satisfied..\n");
    //     printf("Enter Higher secondary percentage: ");
    //     scanf("%d",&h);

    //     if(h>=60 && h<=100){
    //         printf("higher secondary percentage is setisfied..\n");
    //         printf("Enter exam marks: ");
    //         scanf("%d",&e);
    //         if(e>=70 && e<=100){
    //             printf("Passed in exams..\n");
    //             printf("Enter interview marks: ");
    //             scanf("%d",&i);
    //             if(i>=80 && i<=100){
    //                 printf("Selected...\nCongratulations...");
    //             }
    //             else{
    //                 printf("rejected in interview..");
    //             }

    //         }
    //         else{
    //             printf("Failed in exam...");
    //         }
    //     }
    //     else{
    //         printf("Not selected..");
    //     }
    // }
    // else{
    //     printf("Age is not satisfied..");
    // }

    // Quize-->

    int ans;
    printf("Who is known as the Father of the Indian Constitution?\n");
    printf("1:MG\t2:SG\t3:Dr.B.R.A\t4:NG\n");
    printf("Enter your choice:");
    scanf("%d",&ans);

    if(ans==3){
        printf("\nCongratulation! You won 1000Rs...\n");
        printf("Which is the national animal of india?\n");
        printf("1:Spider 2:Lion\t3:Cat\t4:Bengal Tiger\n");
        printf("Enter your choice:");
        scanf("%d",&ans);

        if(ans==4){
            printf("\nCongratulation! You won 10000Rs...\n");
            printf("Which planet is called the Red Planet?\n");
            printf("1:Mars\t2:sun\t3:Cat\t4:Earth\n");
            printf("Enter your choice:");
            scanf("%d",&ans);

            if(ans==1){
                printf("\nCongratulation! You won 100000Rs...\n");
                printf("Game Over..");
            }
            else{
                printf("\nYou won 10000Rs\n");
                printf("Game Over..");
            } 
        }
        else{
            printf("\nYou won 1000Rs\n");
            printf("Game Over..");
        }
    }
    else{
        printf("\nSorry! You loose...\n");
        printf("Game Over..");
    }
}


 

