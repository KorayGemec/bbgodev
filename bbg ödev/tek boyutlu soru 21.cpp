#include <stdio.h>

int main() {
char sayi[10];
int i;

	printf("Sayiyi giriniz:");
	scanf("%s",sayi);
	
	
	for(i=0;sayi[i]!='\0';i++)
	{
		if(sayi[i]==',')
		{
			sayi[i]='.';
		}
	}
	
	printf("Duzeltilmis sayi %s",sayi);
return 0;
}
