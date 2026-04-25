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
    //     printf("Enter number X @ %d:",i);
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
     
}