#include<stdio.h>

int main(){
	int A[10][10],i,n,j,k,a,b,c,d,sayac=0,B[10][10],toplam;
	printf("Lutfen Satir ve Sutun sinirini giriniz :");
	scanf("%d",&n);// kaç satir ve sütun olacağını aldım.
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("A[%d][%d]",i,j);
				scanf("%d",&A[i][j]);
			
			}
		}
		//A dizisini aldım tüm karakterleriyle.
					printf("Olusan matris \n");
		for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
		{	
			printf(" %d ",A[i][j]);
		}	
		printf("\n");
		//A dizisini bi yazdırdım bu sayede sonucu 
		//doğru yazdırdığımdan emin olabilirdim.
	}	
					while (sayac<n+1){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				//döngüye başladım while içinde çünkü aşağıda bi sorun çıkacak
				if(i+1==n)
				{
				}//eğer sütun sayısından 1 fazlası sınıra eşitse hiç bir şey yapma dedim
				else if(A[i+1][j]>A[i][j]){//A dizisinde 2.sütun 1.satırdan büyükse
					b=A[i][j];//Diziyi bir tam sayıya ata
					A[i][j]=A[i+1][j];//sponra 1.sütunu 2.sütuna eşitle
					A[i+1][j]=b;	//2.sütunu da 1.sütuna eşitle çünkü yer değiştirmeli
				}//gelelim while kısmına neden gerektiğine
				//bir kere değiştik evet ama ilk iki sütunda bitmiyor iş
				//sonraki sütunları da kontrol etmesi için
				//sütun sınırı kadar kontrol ettirmem gerekiyor
			}
		}
		sayac++;//baktım ki for bitti sayacı arttırıyorum
				}
	printf("Olusan matris \n");
		for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
		{	//sonra da sonucu yazdırdım buradan aşağısı ort bulma önemsiz dikkat etmesen de olur.
			printf(" %d ",A[i][j]);
		}	
		printf("\n");
	}
			for(j=0;j<n;j++){
				B[0][j] = A[0][j];
}

					printf("Olusan B matrisi \n");
	{
			for(j=0;j<n;j++)
		{	
			printf(" %d ",B[0][j]);
		}	
		printf("\n");
	}
	for(j=0;j<n;j++){
		toplam+=B[0][j];
	}
	printf("Dizinin elemanlarinin ortalamasi = %d",toplam/j);
return 0;
}