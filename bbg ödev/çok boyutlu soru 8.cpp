#include <stdio.h>

int main() {
int n;

	printf("n i giriniz:");
	scanf("%d",&n);
	
int A[n][n],B[n][n],C[n][n];

	for(int i=0;n>i;i++)
	{
		for(int k=0;n>k;k++)
		{
			printf("%d.sutunun %d.satirini giriniz:",i+1,k+1);
			scanf("%d",&A[i][k]);
		}
	}

	for(int i=0;n>i;i++)
	{
		for(int k=0;n>k;k++)
		{
			if(A[i][k]>0)
			{
				B[i][k]=A[i][k];
			}
			else
			{
				C[i][k]=A[i][k];
			}
		}
	}
return 0;
}