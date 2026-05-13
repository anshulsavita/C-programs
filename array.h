
// ***it is a made up header file used in lecture 59 and lecture 60.
void getArray(int *x,int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter value @ %d:",i);
        scanf("%d",x+i);
    }
}
void putArray(int *x,int n){
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d,",x[i]);
    }
    printf("\n");
}
void sort(int *x,int n){
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(x[j]>x[j+1]){
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
}
void insert(int *x,int n,int no, int pos){
    int j;
    for(j=n-1;j>=pos;j--){
        x[j+1]=x[j];
    }
    x[pos]=no;
}
void del(int *x,int n,int pos){  // n is for size
    int i,j;
    for(i=pos;i<n;i++){
        x[i]=x[i+1];
    }
}
void merge(int *x,int n1, int *y,int n2, int *z){  // n1 and n2 is for size
    int i,j;
    for(i=0;i<n1;i++){
        z[i]=x[i];
    }
    for(i=0;i<n2;i++){
        z[i+n1]=y[i];
    }
}