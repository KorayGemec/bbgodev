#include<stdio.h>
main(){
	int sayac[100]={0},i,j,n,A[i][j];
	printf("Lutfen satir ve sutun sinirini giriniz.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		sayac[A[i][j]]++;		
		}
	}
	for(i=0;i<100;i++)
	{
		if(sayac[i]!=0)
		{
			printf("%d %d \n",i,sayac[i]);
		}
	}
return 0;
}