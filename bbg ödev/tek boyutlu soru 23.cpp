#include <stdio.h>

int main() {
int i=0,girilensayi,kalan,temp;

	printf("Sayiyi giriniz:");
	scanf("%d",&girilensayi);
	temp=girilensayi;
	
	while (girilensayi>0)
	{
		kalan=girilensayi%10;
		girilensayi=(girilensayi-kalan)/10;
		i++;
	}
	
	printf("Sonuc:%d",temp/i);
return 0;
}