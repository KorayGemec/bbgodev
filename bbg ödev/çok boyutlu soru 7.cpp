#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
	int A[10][10],n,i,j,us;
	printf("Lutfen satir ve sutun sinirini giriniz.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}	
	}
	printf("Lutfen almak istediginiz ussu giriniz.\n");
	scanf("%d",&us);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		A[i][j] = pow(A[i][j],us);
		}
	}
	printf("A matrisi\n");	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d ",A[i][j]);
		}
		printf("\n");
	}
return 0;
}