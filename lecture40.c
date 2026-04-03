# include<stdio.h>
// Arrays(collection)---> 1.)use to store more then one value in a single variables. 
// 2.)Arrays holds data homogeneous in nature.
// 3.)values in arrays can read or write thru index/subscript.
// 4.)there are two types of arrays
    // -single dimentional
    // -multi dimentional

    // singleDimentional--> type <var>[size]

    void main(){
        // int x[5];
        // x[2 ]= 900;
        // x[0] = x[2]+300;

        // Question->
        // int x[]={45,67,89,34,56},i,s=0;
        // for(i=0;i<=4;i++){
        //     s=s+x[i];
        //     printf("%d,",x[i]);
        // }
        // printf("\nTotal:%d",s);

        int x[5],i;
        for(i=0;i<=4;i++){
            printf("Enter number:");
            scanf("%d",&x[i]);
        }
        for(i=0;i<=4;i++){
            if(x[i]>100){
                x[i]=-1;
            }
        }
        for(i=0;i<=4;i++){
            printf("%d, ",x[i]);
        }

    }
    