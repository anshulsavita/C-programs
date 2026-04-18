#include<stdio.h>
#include<string.h>
void main(){
    // Question--> input matrix of 3*3 and find out the sum of digonal elements (left to right).
    // int x[3][3];
    // int i,j,s=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         if(i==j){
    //             s=s+x[i][j];
    //         }
    //     }
    // }
    // printf("%d",s);

    // ******or*****
    // int x[3][3];
    // int i,j,s=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     s=s+x[i][i];
    // }
    // printf("%d",s);

    // Question--> input matrix of 3*3 and find out the sum of digonal elements (right to left).
    // int x[3][3];
    // int i,j,s=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values");
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     s=s+x[i][2-i];
    // }
    // printf("%d",s);

    // Question--> input two matrix and print addition of two matrix.
    // int x[3][3],y[3][3],z[3][3];
    // int i,j,s=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values of matrix one:");
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values of matrix second:");
    //         scanf("%d",&y[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         z[i][j]=x[i][j]+y[i][j];
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("%d",z[i][j]);
    //     }
    //     printf("\n");
    // }

    // Question-->input two matrix and print multiplication of two matrix.
    int x[3][3],y[3][3],z[3][3];
    int i,j,s,k;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("Enter values of matrix one:");
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("Enter values of matrix second:");
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            s=0;
            for(k=0;k<=2;k++){
                s=s+(x[i][k]*y[k][j]);
            }
            z[i][j]=s;
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }

    // Quiz-->input a 3*3 matrix and print all the right angle triangle seperately.

    
}