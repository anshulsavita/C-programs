#include<stdio.h>
#include"array.h"
// void main(){
// *****question-->sort(x,10)
    // int x[10];
    // getArray(x,10);
    // printf("Unsorted values:\n");
    // putArray(x,10);
    // sort(x,10);
    // printf("Sorted values:\n");
    // putArray(x,10);

// *****quiz-->insert(x,10,100,5)
    // int x[10];
    // getArray(x,9);
    // insert(x,10,5,3);
    // putArray(x,10);
    
// *****quiz-->del(x,10,5)
    // int x[10];
    // getArray(x,10);
    // del(x,10,3);
    // putArray(x,9);

// *****quiz-->merge(x,10,y,5,z)
    // int x[5],y[5],z[10];
    // getArray(x,5);
    // getArray(y,5);
    // merge(x,5,y,5,z);
    // putArray(z,10);
// }

/* ****Recursion-->
 - function itself call a function knows as recursion.
 - recursion must be control by some condition otherwise it will crash the program, it works on stack.
 - recursion used stack to remmember the process. while iteration never use stack.
 - recursion is used for backtracking.

***backtracking--> when we go in a dense forsest we can easily forget wright direction,
so we mark checkpoints using flags and when we start to return, we take off the last flag first and then remainings.
*/

// ****backtracking example-->
// void call(int n){
//     if(n>=1){
//         printf("Hello %d\n",n);
//         call(n-1);
//     }
//     printf("Hi %d\n",n);
// }
// void main(){
//     call(5);
// }

// ***nexted functions
void usa(){
    printf("In USA\n");
}
void lanka(){
    printf("In lanka\n");
    usa();
    printf("Again in lanka\n");
}
void india(){
    printf("In India\n");
    lanka();
    printf("Again in India\n");
}
void main(){
    printf("Start\n");
    india();
    printf("End\n");
}

