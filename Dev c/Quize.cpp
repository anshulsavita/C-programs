#include<stdio.h>

int main()
{
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
    return 0;
}
