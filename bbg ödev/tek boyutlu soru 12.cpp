#include <stdio.h>

int main() {
char cumle[100];
system("color 9E");

	printf("Cumleyi gir:");
	gets(cumle);


	puts(cumle);
	
	for(int i=0;strlen(cumle)>i;i++)
	{
		printf("\033[31m%c\033[31m",cumle[i]);
		sleep(1);
	}
	printf("\033[30m\033[30m");
return 0;
}