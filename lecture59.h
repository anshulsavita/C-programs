// ****create own header file--> this hole file can works as a header file in other files 
// like i have use this file in lecture59.c as a header file.

int sqr(int n){
    int k=n*n;
    return k;
}
int cube(int n){
    int j=n*n*n;
    return j;
}
void table(int n){
    int t,i=1;
    while(i<=10){
        t=n*i;
        printf("%dx%d=%d\n",n,i,t);
        i++;
    }
}
double factorial(int n){
    double f=1;
    while(n>1){
        f=f*n;
        n--;
    }
    return f;
}
void address(void){
    printf("Develped by anshul.\n");
}