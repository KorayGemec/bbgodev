#include <stdio.h>

int main() {
char cumle[100];
char noktalama[7]={'.',',',';',':','\0'};
int i,k;


	printf("Cumleyi giriniz:");
	gets(cumle);
	
	cumle[0]=cumle[0]-32;
	
	for (i=0;cumle[i+1]!='\0';i++)
	{
		for (k=0;cumle[k+1]!='\0';k++)
		{
			if (cumle[i]==' ')
			{
				cumle[i+1]=cumle[i+1]-32;
			}
			
			if (noktalama[i]==cumle[k])
			{
				cumle[k+1]=cumle[k+1]-32;
			}
		}
	}
	
	puts(cumle);
return 0;
}