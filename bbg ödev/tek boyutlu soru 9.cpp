#include<stdio.h>
#include<string.h>
int main(){
	int n,i=0,j,a,b,sayac1=0,sayac=0;
	char str1[100],str2[100];
	printf("Lutfen cumle giriniz.\n");
	gets(str1);
	
	printf("Lutfen bulmak istediginiz kelimeyi yaziniz.\n");
	gets(str2);
	for(a=0;str2[a]!='\0';a++){
		sayac1++;
	}
	for(j=0;str1[j]!='\0';j++){
		if(str1[j]==str2[i]){
				i++;
			sayac++;
			}
		else
		{
			
		}
		}
	if(sayac1==sayac){
		printf("cumledeki kelime = %s\n",str2);
	}
	else{
		printf("girdiginiz kelime bu cumlede yoktur.\n");
	}
return 0;
}
	
	