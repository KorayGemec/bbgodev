#include <stdio.h>

int main() {
int n,i,A[100];
	
	printf("N degerini giriniz:\n");
	scanf("%d",&n);
	
	//dizinin eleman sayisi n ...

	for (i=0;i<n;i++)
	{
		if (i%2==0)
		{
			A[i]=1;
		}
		else 
		{
			A[i]=0;
		}
	}
	
	for (i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
return 0;
}