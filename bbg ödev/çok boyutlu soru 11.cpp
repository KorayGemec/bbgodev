#include <stdio.h>

int main() {

char kelime[100];
int x,y,i,j,k,r;

	printf("Kelimeyi giriniz:");
	gets(kelime);
	
	srand(time(NULL));

	for(int i=0;kelime[i]!='\0';i++)
	{
		
		j=kelime[i];
		x=rand()%50;
		y=rand()%50;
		
		if(j>=65&&j<=91)
		{
			k=rand()%2;
			if(k==0)
			{
				j+=32;
			}
		}
		else if(j>=97&&j<=122)
		{
			k=rand()%2;
			if(k==0)
			{
				j-=32;
			}
		}
		r=rand()%6+1;
		
		if (r == 1) {
         printf("\033[1;31mR\033[0m");  
      } else if (r == 2) {
         printf("\033[1;32mG\033[0m");  
      } else if (r == 3) {
         printf("\033[1;33mY\033[0m");  
      } else if (r == 4) {
         printf("\033[1;34mB\033[0m");  
      } else if (r == 5) {
         printf("\033[1;35mM\033[0m");  
      } else if (r == 6) {
         printf("\033[1;36mC\033[0m");  
      }
		
		
			
		printf("\033[%d;%dH%c", y, x, j);
		
		
	}
return 0;
}