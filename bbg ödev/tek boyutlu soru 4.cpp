#include <stdio.h>

int main() {
int n,A[100],B[100],C[100],i;
	
	printf("diziniz kac elemanli olsun?");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("%d. dizi elemanini giriniz:",i+1);
		scanf("%d",&A[i]);
	}

	for (i=0;i<n;i++)
	{
		B[i]=A[i]*A[i];	
	}
	
	for (i=0;i<n;i++)
	{
		C[i]=sqrt(A[i]);
	}
	
	
	for (i=0;i<n;i++)
	{
		printf("%d.elemanlarin skaler çarpimi:%d\n",i+1,C[i]*B[i]);
	}
return 0;
}
	
