#include <stdio.h>

int main() {

	char dizi[100];
	
	int i;
	
	printf("metni giriniz:\n\n");
	scanf("%s",dizi);
	
	printf("Buyuk harfli kisim:%s\n\n",dizi);
	
	for(i=0;dizi[i]!='\0';i++)
	{
		dizi[i]+=32;
	}
	printf("Kucuk harfli kisim: %s \n\n",dizi);
return 0;
} 
 
 