#include<stdio.h>
#include<math.h>
    /* c=pow(2,3)-->
    c==return type.
    pow == function name.
    (2,3)== arguments 
    ****prototyping==means blue print

    syntax(function prototyping/defination/calling)
    ---------
    <return type> <function name>(arguments){
         ======
         =====
         [return <value>]
    }
*/

// int sum(int a,int b,int c){ //called function
//     int s;
//     s=a+b+c;
//     return s;
// }
// float si(float p,float r, float t){
//     float s;
//     s=p*r*t/100;
//     return s;
// }
// int max(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int total(int n){
//     int i=1,s=0;
//     while(i<=n){
//         s=s+i;
//         i++;
//     }
//     return s;
// }
// void main(){
//     int t,m;
//     t=sum(2,3,5); // calling function
//     printf("%d\n",t);
//     float c;
//     c=si(40000,2,2);
//     printf("%f",c);
//     t=max(10000,300);
//     printf("\n%d",t);
//     m=total(20);
//     printf("\n%d",m);
// }