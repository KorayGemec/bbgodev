#include <stdio.h>

int main() {
char ifade[100];
int sayac=0,l,m;

		printf("Dizi elemanlarini giriniz:");
		gets(ifade);
		
		for(int i=0;ifade[i]!='\0';i++)
		{
			m=0;
			if(i>0)
			{
				l=i-1;
				while (l>=0)
				{
					if(ifade[i]==ifade[l])
					{
						m++;
					}
					l--;
				}
			}
			
			
			if(m<=0)
			{
				for(int k=0;ifade[k]!='\0';k++)
				{
					if(ifade[i]==ifade[k])
					{
						sayac++;
					}
				}
				printf("%c den %d tane var..\n",ifade[i],sayac);
			}
			sayac=0;
		}
return 0;
}