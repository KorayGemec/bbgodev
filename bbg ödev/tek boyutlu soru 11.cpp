#include <stdio.h>

int main() {
char kelime[100],kelime2[100];
int i,k;


	printf("kelimeyi giriniz:");
	scanf("%s",kelime);
	k=0;
	for(i=0;kelime[i]!='\0';i++)
	{
		kelime2[k]=kelime[i];
		kelime2[k+1]=' ';
		k=k+2;
	}
	printf("%s",kelime2);
return 0;
}