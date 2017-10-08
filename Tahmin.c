#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void tahmin()
{
	printf("Tahmin edilen sayi tahmininizden buyukse 'B'/kucukse 'K'/dogruysa 'D' yaziniz.");
	int rnd;
	char c1;
	//char D=68,B=66,K=75;
	rnd=1+rand()%1000;
	printf("\n%d ? ",rnd);
	scanf("%c",&c1);
	c1=getche();
	
	while(c1=='B' || c1=='K' );
	{
		
		
		if(c1=='B')
		{
			rnd=tahminB(rnd);
			printf("\n%d ? ",rnd);
			scanf("%c",&c1);
		}
		else if(c1=='K')
		{
			rnd=tahminK(rnd);
			printf("\n%d ? ",rnd);
			scanf("%c",&c1);
		}
		else
			printf("\nYanlis karakter...");
		
		
	}
	
	
}

int tahminK(int x)
{
	int t;
	t=1000-x;
	int rnd=x+rand()%t;
	return rnd;
}

int tahminB(int x)
{
	int rnd=1+rand()%x;
	return rnd;
}

int main()
{
	int rnd;
	printf("Lutfen 1 ile 1000 arasinda bir sayi tahmin ediniz...");
	printf("Tuttunuz mu ? :) (E/H)");
	switch (getchar())
	{
		case 'E':
		case 'e':
			tahmin();
			break;
		case 'H':
		case 'h':
			break;
	}
	return 0;
}
