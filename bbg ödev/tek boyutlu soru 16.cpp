
#include <stdio.h>

int main() {
char aylar[12][10]={"ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik"};
char girilenay[10];
int i,a;
char burclar[12][10]={"oglak","kova","balik","koc","boga","ikizler","yengec","aslan","basak","terazi","akrep","yay"};
	
	printf("Dogdugunuz ayi giriniz:");
	scanf("%s",girilenay);
	
	
	for (i=0;i<=12;i++)
	{
		
		a=strcmp(girilenay,aylar[i]);
		
		if (a==0)
		{
			printf("%s burcusunuz...",burclar[i]);
		}
			
	}
return 0;
}	
