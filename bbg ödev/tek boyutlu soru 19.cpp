
#include <stdio.h>

int main() {
int a,b,secim,p,e=2.71;
float islem;

	printf("a ve b sayilarini giriniz....\n");
	scanf("%d%d",&a,&b);
	
	printf("P sayisini giriniz: 0< p <0.5\n");
	scanf("%d",&p);
	
	printf("Seciminizi yapiniz\n1.Heinz ortalma\n2.Heronian ortalama\n3.Stolarsky ortalma\n4.Identric ortalama\n5.Logaritmik ortalama\n");
	scanf("%d",&secim);
	
	
	
	switch (secim)
	{
		case 1: 
		
		islem=(pow(a,p)*pow(b,1-p)+pow(a,1-p)*pow(b,p))/2; 
		
		printf("Islem sonucunuz..%.3f",islem);
		
		break;
			
		case 2:
		
		islem=(a+pow(a*b,1/2)+b)/3;
		
		printf("Islem sonucunuz..%.3f",islem);
		
		break;
			
		case 3:
			
		if(a==b)
		{
			islem=a;
		}
		else
		{
			islem=pow((pow(a,p)-pow(b,p))/pow(p,a-b),pow(p-1,-1));
		}
		
		printf("Islem sonucunuz..%.3f",islem);
		
		break;
			
		case 4:
			
			if(a==b)
		{
			islem=a;
		}
		else
		{
			islem=pow(e,-1)*pow((pow(b,b)/pow(a,a)),pow(b-a,-1));
		}
		
		printf("Islem sonucunuz..%.3f",islem);
		
		break;
			
		case 5:
			
		if(a==b)
		{
			islem=a;
		}
		
		else if (a==0 && b==0)
		{
			islem=0;
		}
		
		else
		{
			islem=(b-a)/(log(b)-log(a));
		}
		
		printf("Islem sonucunuz..%.3f",islem);
		
		break;	
	}
return 0;
}
	