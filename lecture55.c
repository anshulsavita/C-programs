#include<stdio.h>
#include<malloc.h>
void main(){
    // ***DMA(Dynamic Memory Allocation)
    //  -use to allocate n memory spaces for a pointer variable.
    //  - it also use resize the memory blocks.
    //  - one can also deallocate the memory space using DMA.

    // DMA provide following functions.
    // -malloc()
    // -calloc()
    // -realloc()
    // -free()

    // header file --> malloc.h
    // -----------

    // malloc() is use to allocate n momory space for pointer, if memory successfully allocate by this function
    // it will return the base address of allocated memory otherwise it will return NULL

    // Syntax--> <ptr var>=(type*)malloc(size)
    // int *p;
    // p=(int*)malloc(5*sizeof(int));

    // ***free(x)-->is used to deallocate.
    // ****Syntax--> free<ptr>
    //  free(p);

    // ***Question--> 
    // int *x,n,i;
    // printf("Enter number of integers u want to input: ");
    // scanf("%d",&n);
    // x=(int*)malloc(sizeof(int)*n);
    // for(i=0;i<n;i++){
    //     printf("Enter number @ %d: ",i);
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<n;i++){
    //     printf("%d,",x[i]);
    // }
    // free(x);

    // ***calloc-->calloc is same as malloc but the major difference between these two function is the memory which allocate
    // with calloc contains zero while malloc contains garbage. 
    // ***syntax--> <ptr var>=(type*)calloc(n,size)

    // int *x,n,i;
    // printf("Enter number of integers u want to input: ");
    // scanf("%d",&n);
    // x=(int*)calloc(n,sizeof(int));
    // for(i=0;i<n;i++){
    //     printf("%d,",x[i]);
    // }
    // for(i=0;i<n;i++){
    //     printf("Enter number @ %d: ",i);
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<n;i++){
    //     printf("%d,",x[i]);
    // }
    // free(x);

    // ***realloc()--> resize the memory block which allocate with help of malloc of calloc.
    // ***suntax--> <ptr var>=(type*)realloc(<ptr var>,new_size)

    // int *x,n,i,ns;
    // printf("Enter number of integers u want to input: ");
    // scanf("%d",&n);
    // x=(int*)malloc(n*sizeof(int));
    // for(i=0;i<n;i++){
    //     printf("Enter Number @ %d:",i);
    //     scanf("%d",x+i);
    // }
    // printf("Enter new size:");
    // scanf("%d",&ns);

    // x=(int*)realloc(x,ns*sizeof(int));

    // for(i=n;i<ns;i++){
    //     printf("Enter number @ %d: ",i);
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<ns;i++){
    //     printf("%d,",x[i]);
    // }
    // free(x);

    // ****Arrays-->
    //  - arrays are static in nature.
    //  - since arrays are static in nature one can not increase of decrease their memory size,
    // even one can not destroy it at run time.
    
    // ****pointers-->
    //  - pointers are dynamic innature.
    //  - since they are dynamic in nature, one can increase or decrease their memory size
    // even destroy it at runtime.

    // int *x,*y,*z,i,n;
    // printf("Enter number u want to input:");
    // scanf("%d",&n);

    // x=(int*)malloc(n*sizeof(int));
    // y=(int*)malloc(n*sizeof(int));
    // z=(int*)malloc(n*sizeof(int));

    // for(i=0;i<n;i++){
    //     printf("Enter number X @ %d:",i);
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<n;i++){
    //     printf("Enter number Y @ %d:",i);
    //     scanf("%d",y+i);
    // }
    // for(i=0;i<n;i++){
    //     z[i]=x[i]+y[i];
    //     printf("%d,",z[i]);
    // }
    // free(x);
    // free(y);
    // free(z);

    // ***Quiz-->input *x for n values, input *y for m values and merge them as *z.
    // int *x,*y,*z,n,m,i,c=0;
    // printf("Enter number you want to input: ");
    // scanf("%d",&n);
    // printf("Enter number you want to input: ");
    // scanf("%d",&m);

    // x=(int*)malloc(n*sizeof(int));
    // y=(int*)malloc(m*sizeof(int));
    // z=(int*)malloc((n*m)*sizeof(int));


    // for(i=0;i<n;i++){
    //     printf("Enter number X @ %d:",i);
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<m;i++){
    //     printf("Enter number Y @ %d:",i);
    //     scanf("%d",y+i);
    // }
    // for(i=0;i<n;i++){
    //     z[i]=x[i];
        
    // }
    // for(i=0;i<m;i++){
    //     z[i+n]=y[i];
    // }
    // c=n+m;
    // for(i=0;i<c;i++){
    //     printf("%d,",z[i]);
    // }
    // free(x);
    // free(y);
    // free(z);

    // Quiz-->find maximum and minimum element using pointers.
    // int *x,n,i,max,min;
    // printf("Enter value: ");
    // scanf("%d",&n);
    // x=(int*)malloc(n*sizeof(int));
    // for(i=0;i<n;i++){
    //     printf("Enter value at %d: ",i);
    //     scanf("%d",x+i);
    // }
    // max=x[0];
    // min=x[0];
    // for(i=1;i<n;i++){
    //     if(x[i]>max){
    //         max=x[i];
    //     }
    //     if(x[i]<min){
    //         min=x[i];
    //     }
    // }
    // printf("Maximum value: %d\nMinimum value: %d",max,min);
    // free(x);

    // Quiz-->find second largest element using pointers.
    // int *x,n,i,t;
    // printf("Enter value u want to input: ");
    // scanf("%d",&n);
    // x=(int*)malloc(n*sizeof(int));
    // for(i=0;i<n;i++){
    //     printf("Enter value: ");
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<n;i++){
    //     if(x[i]>x[i+1]){
    //         t=x[i];
    //         x[i]=x[i+1];
    //         x[i+1]=t;
    //     }
    // }
    // printf("%d",x[i-2]);
    // free(x);

    // Quiz--> insert an element using pointers.
    // int *x,n,i,n1,p;
    // printf("Enter value: ");
    // scanf("%d",&n);
    // x=(int*)malloc(n*sizeof(int));
    // for(i=0;i<n-1;i++){
    //     printf("Enter values at %d: ",i);
    //     scanf("%d",x+i);
    // }
    // printf("Enter number u want to inset: ");
    // scanf("%d",&n1);
    // printf("Enter place you where u want to insert: ");
    // scanf("%d",&p);
    // for(i=n-2;i>=p;i--){
    //     x[i+1]=x[i];
    // }
    // x[p]=n1;
    // for(i=0;i<n;i++){
    //     printf("%d,",x[i]);
    // }
    // free(x);

    // Quiz-->sort elements in ascending using pointers.
    // int *x,n,j,i,t;   
    // printf("Enter number: ");
    // scanf("%d",&n);
    // x=(int*)malloc(n*sizeof(int));
    // for(i=0;i<n;i++){
    //     printf("Enter value at %d: ",i);
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         if(x[j]>x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
        
    // }
    // for(i=0;i<n;i++){
    //     printf("%d,",x[i]);
    // }
    // free(x);

    // Quiz-->sort elements in descending order using pointers.
    // int *x,n,j,i,t;   
    // printf("Enter number: ");
    // scanf("%d",&n);
    // x=(int*)malloc(n*sizeof(int));
    // for(i=0;i<n;i++){
    //     printf("Enter value at %d: ",i);
    //     scanf("%d",x+i);
    // }
    // for(i=0;i<n;i++){
    //     for(j=0;j<n-1;j++){
    //         if(x[j]<x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
    // }
    // for(i=0;i<n;i++){
    //     printf("%d,",x[i]);
    // }
    // free(x);
}