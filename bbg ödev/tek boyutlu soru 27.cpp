#include <stdio.h>

int main() {
char dizi[100];
	
	printf("Ters cevirmek istediginiz text i giriniz:");
	gets(dizi);
	
	printf("%s",strrev(dizi));
return 0;
}