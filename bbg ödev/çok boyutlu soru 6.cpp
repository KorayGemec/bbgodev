#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
	double C[10][10],D[10][10];
	int A[10][10],B[10][10],n,i,j,a,b;
	printf("Lutfen satir ve sutun sinirini giriniz.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}	
	}
	printf("A matrisi\n");	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d ",A[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			B[i][j] = pow(A[i][j],2);
		}
	}
	printf("B matrisi\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d ",B[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			C[i][j]=sqrt(A[i][j]);
		}
	}
	printf("C matrisi\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %.2f ",C[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		D[i][j]=B[i][j]*C[i][j];
		}
	}
	
	printf("D matrisi\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %.2f ",D[i][j]);
		}
		printf("\n");	
}
return 0;	
}