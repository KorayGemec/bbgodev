#include <stdio.h>

int main() {
char birler[9][6]={"bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};	
char onlar[9][10]={"on","yirmi","otuz","kirk","elli","altmış","yetmiş","seksen","doksan",};
char yuzler[9][15]={"yuz","iki yuz","uc yuz","durt yuz","bes yuz","alti yuz","yedi yuz","sekiz yuz","dokuz yuz"};
char binler[9][15]={"bin","iki bin","uc bin","dort bin","bes bin","alti bin","yedi bin","sekiz bin","dokuz bin"};

int gun,ay,yil;
int a,b,c,d,i,m,z,y,x,k,l;


	printf("Dogum tarihinizi AA/BB/CCCC formatinda giriniz:");
	scanf("%d/%d/%d",&gun,&ay,&yil);
	
	a=gun%10;
	
	for(i=0;i<10;i++)
	{
		if(a==i)
		{
			x=birler[i-1];
		}
	}	
	
	b=(gun-a)/10;
	
	for(i=0;i<10;i++)
	{
		if(	b==i)
		{
			y=onlar[i-1];
		}
	}
	
	
	printf("%s %s",y,x);
	
	
	//-----------------------
	
	
	
char aylar[12][10]={"ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik"};


	for(i=0;i<=12;i++)
	{
		if(ay==i)
		{
			printf(" %s ",aylar[i-1]);
		}
	}
	
	
	
	
	
	//----------------------
	
	a=yil%10;
	yil=(yil-a)/10;
	
	for(i=0;i<10;i++)
	{
		if(a==i)
		{
			k=birler[i-1];
		}
	}	
	
	b=yil%10;
	yil=(yil-b)/10;
	
	for(i=0;i<10;i++)
	{
		if(b==i)
		{
			l=onlar[i-1];
		}
	}
	
	c=yil%10;
	yil=(yil-c)/10;
	
	for(i=0;i<10;i++)
	{
		if(c==i)
		{
			z=yuzler[i-1];
		}
	}
	
	d=yil;

	for(i=0;i<10;i++)
	{
		if(d==i)
		{
			m=binler[i-1];
		}
	}
	
	printf(" %s %s %s %s",m,z,l,k);
	
return 0;
}