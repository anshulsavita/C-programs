
// ***it is a made up header file used in lecture 59
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