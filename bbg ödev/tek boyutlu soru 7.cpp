#include <stdio.h>

int main() {

	char dizi[100];
	
	int k;
	
	printf("metni giriniz:");
	scanf("%s",&dizi);
	
	k=dizi[0];
	k-=32;
	dizi[0]=k;
	
	printf("%s",dizi);
return 0;
}	
	