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

// Quize--> K=reverse(2493).
int revers(int n){
    int s=0,r;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
// quiz--> countdigit(3392).
int count(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}

// quiz-->sumdigit(8344).
int sumdigit(int n){
    int r,s=0;
    while(n>0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;
}
// quiz-->D to B (25)-->11001.
int DtoB(int n){
    int r,s=0;
    while(n>0){
        r=n%2;
        s=s*10+r;
        n=n/2;
    }
    n=s;
    s=0;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
// quiz--> B to D (11001)--> 25.
int BtoD(int n){
    int r,s=0,p=1;
    while(n>0){
        r=n%10;
        s=s+(r*p);
        p=p*2;
        n=n/10;
    }
    return s;
}
// quiz-->k=iseven(4)--> return 0 or 1;
int iseven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
// quiz-->k=isperfect(132)--> return 0 or 1.
int isperfect(int n){
    int p=1,r,s=0,t;
    while(n>0){
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
    }
    if(p==s){
        return 1;
    }
    else{
        return 0;
    }
}
// quiz-->k=isarmstrong(372).
int isarmstrong(int n){
    int c=0,r,t,s=0,t1;
    double d;
    t=n;
    t1=t;
    while(n>0){
        n=n/10;
        c++;
    }
    while(t>0){
        r=t%10;
        d=pow(r,c);
        s=s+d;
        t=t/10;
    }
    if(s==t1){
        return 1;
    }
    else{
        return 0;
    }
}

// quiz-->k=isprime(7).

void main(){
    int r,n,c,s,k;
    r=revers(3392);
    printf("Reverse: %d\n",r);
    c=count(7599);
    printf("Count: %d\n",c);
    s=sumdigit(1234);
    printf("Sum: %d\n",s);
    k=DtoB(13);
    printf("Binary: %d\n",k);
    k=BtoD(11001);
    printf("Decimal: %d\n",k);
    k=iseven(4);
    printf("is even: %d\n",k);
    k=isperfect(123);
    printf("is perfect: %d\n",k);
    k=isarmstrong(153);
    printf("is armstrong: %d\n",k);
    k=isprime(20);
    printf("is prime: %d\n",k);
}