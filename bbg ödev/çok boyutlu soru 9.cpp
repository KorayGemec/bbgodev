#include <stdio.h>
int main ()
{
	int A[10][10],B[10][10],C[10][10],n,i,j;
	printf("Satir ve sutun sayisi giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("B[%d][%d]: ",i,j);
			scanf("%d",&B[i][j]);
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i][j]=B[i][j])
			{
				C[i][j]=A[i][j];
		    }
			printf("C[%d][%d]= %d \n",i,j,C[i][j]);		    
		}
	}
return 0;	
}