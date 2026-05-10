#include<stdio.h>
#include<math.h>

int reverse(int n){ // called function (formal args)
    int r,s=0;
    while(n){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return(s);
}

// ***arguments-->
    //  - use to transfer the value from one function to another function.
    //  - one can define args as integer, float, char, etc.
    //  - when args is define as void then no value will be transfer by function.
    //  - there are two types of args
    //      -actual args
    //      -formal args
    //  actal args define in calling fn while formal args define in called fn.
    //  actal args copied their values in formal args.
    
    // ****return tupe-->
    //  - one can declared it as int, char, float,long etc.
    //  - when return type is declared as int, char, etc... it will retun a value according to its type.
    //  - when return type is declare as void, then no value be return by fn. 
    
char lower(char c){
    if(c>='A' && c<='Z'){
        c=c+32;
    }
    return(c);
}
int max(int x, int y){
    if(x>y){
        return(x);
    }
    else{
        return(y);
    }
}
// **print Table of n;
void table(int n){
    int i,t;
    for(i=1;i<=10;i++){
        t=n*i;
        printf("%dx%d=%d\n",n,i,t);
    } 
}
void print(int x,int y){
    int i;
    for(i=x;i<=y;i++){
        printf("%d,",i);
    }
    printf("\n");
}
// ***Quiz-->print value from x to y with difference of z;
void range(int x,int y,int z){
    int i;
    for(i=x;i<=y;i=i+z){
        printf("%d,",i);
    }
    printf("\n");
}
// ***Quiz-->print('*',20)--> ********....20times
void prints(char c,int n){
    int i=0;
    for(i=1;i<=n;i++){
        printf("%c,",c);
    }
    printf("\n");
}

void main(){
    int k,m;
    char x;
    k=reverse(3456); // calling(actual)
    printf("%d\n",k);

    k=reverse(6848); // calling(actual)
    printf("%d\n",k);

    x=lower('B');
    printf("%c\n",x);

    m=max(100,200);
    printf("%d\n",m);

    table(7);
    
    print(5,25);
    print(25,40);

    range(2,10,2);

    prints('s',5);
    
}