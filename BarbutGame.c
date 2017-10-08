#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int zarAt();
void oyunDurumu(int);
void tekrarDene(int);
int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int toplam = zarAt();
	switch (toplam)
	{
	case 7: case 11:
		oyunDurumu(1);
		break;
	case 2: case 3: case 12:
		oyunDurumu(0);
		break;
	default:
		tekrarDene(toplam);
		break;
	}
	system("Pause");

	return 0;
	
}

int zarAt(){
	int zar1 = 1 + rand() % 6;
	int zar2 = 1 + rand() % 6;
	printf("Zar 1= %d \nZar 2= %d\nToplam Deger=%d\n", zar1, zar2,zar1+zar2);
	return (zar1 + zar2);
}

void oyunDurumu(int durum){
	switch (durum)
	{
	case 0:
		printf("Oyuncu Oyunu Kaybeder.");
		break;
	case 1:
		printf("Oyuncu Oyunu Kazanýr.");
		break;
	}

}

void tekrarDene(int toplam){
	int tekrar=0;
	while (tekrar != toplam){
		tekrar=zarAt();
		if (tekrar == toplam){
			oyunDurumu(1);
			break;
		}
		else if (tekrar==7)
		{
			oyunDurumu(0);
			break;
		}
	}

}