#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int A[10][10],B[10][10],C[10][10],D[10][10],T1[10][10],T2[10][10],i,n,j,k,m;
	printf("Lutfen satir ve sutun sayisini giriniz : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d] ",i,j);
			scanf("%d",&A[i][j]);
		}
		
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("B[%d][%d] ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("C[%d][%d] ",i,j);
			scanf("%d",&C[i][j]);
			
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			T1[j][i]=B[i][j];
			T2[j][i]=C[i][j];
		}
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			D[i][j]=A[i][j]*(T1[i][j]+T2[i][j]);
			printf(" %d ",D[i][j]);
			
		}
	printf("\n");	
	}
int toplam = 0;
for(i=0;i<n;i++){
			toplam +=D[i][i];
	}
printf("Matris dizisi = %d",toplam);
return 0;
}
