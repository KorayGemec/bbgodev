#include <stdio.h>

int main() {
int n,A[100],B[100],C[100],D[100],i,max;
	
	printf("diziniz kac elemanli olsun?");
	scanf("%d",&n);
	
	printf("A dizisinin elemanlarini giriniz:\n");
	
	for (i=0;i<n;i++)
	{
		printf("%d. dizi elemanini giriniz:",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("B dizisinin elemanlarini giriniz:\n");
	
	for (i=0;i<n;i++)
	{
		printf("%d. dizi elemanini giriniz:",i+1);
		scanf("%d",&B[i]);
	}
	
	printf("C dizisinin elemanlarini giriniz:\n");
	
	for (i=0;i<n;i++)
	{
		printf("%d. dizi elemanini giriniz:",i+1);
		scanf("%d",&C[i]);
	}
	
	
	for (i=0;i<n;i++)
	{
		D[i]=A[i]+B[i]-C[i]
	}
return 0;
}
	