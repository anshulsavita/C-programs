#include<stdio.h>
void main(){
//	int i = 1,s=0,n,N;
//	printf("Enter Total number:");
//	scanf("%d",&N);
//	xyz:
//		printf("Enter Price:");
//		scanf("%d",&n);
//		s=s+n;
//		i=i+1;
//		if(i<=N)
//		{
//			goto xyz;
//		}
//		printf("sum: %d",s);

	int  p=1,n=5;	
	xyz:
	p = p*n;
	n=n-1;
	if(n>=1){
		goto xyz;
	}	
	printf("Product:%d",p);
}
