#include stdio.h
#include stdlib.h
int main ()
{
	int A[10][10],B[10][10],T[10][10],t,k,n,m,j,i;
	printf(Satir ve sutun sayisini giriniz.n);
	scanf(%d,&n);
	
		for (i=0;in;i++)
	{ 
			for(j=0;jn;j++)
		{
			printf(A[%d][%d] = ,i,j);
			scanf(%d,&A[i][j]);
		} 
	}
		for(k=0;kn;k++)
	{
			for(m=0;mn;m++)
		{
			T[k][m]=A[m][k];
		}
	}
	for(i=0;in;i++)
	{
		for(j=0;jn;j++)
		{	
			B[i][j]=(T[i][j]A[i][j]);
		}		
			
	}
	printf(Olusan matris n);
		for(k=0;kn;k++)
	{
			for(m=0;mn;m++)
		{	
			printf( %d ,B[k][m]);
		}	
		printf(n);
	}
	int min = B[0][0],max = B[0][0];
	for(i=0;in;i++){
		for(j=0;jn;j++){
			if(B[i][j]max){
				max=B[i][j];
			}
			else if(B[i][j]min){
				min=B[i][j];
			}
		}
	
	}
	printf(En buyuk eleman = %dn,max);
	printf(En kucuk eleman = %d,min);
return 0;
}