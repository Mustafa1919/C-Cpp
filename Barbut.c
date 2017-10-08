#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

void menu();
void barbutOyun(float);
void zafer(float);
void bozgun(float);
void sans(int,float);
void bakiyeKontrol();

float bakiye = 1000;

int main(){
	setlocale(LC_ALL, "Turkish");
	printf("\t\t\tBARBUT OYUNU\n");
	printf("Barbut Oyununa Hoþgeldiniz. Baþlangýç Bakiyeniz 1000 TL'dir.\n");
	srand(time(NULL));
	menu();
	
}

void menu(){
	float bahis;
	printf("\n\n");
	printf("Bakiyeniz= %.2f TL\n", bakiye);
	printf("Lütfen bahis miktarýný giriniz: ");
	scanf("%f", &bahis);
	while (bahis > bakiye){
		printf("Yeteri kadar bakiyeniz yok.Lütfen geçerli bahis giriniz.");
		scanf("%f", &bahis);
	}
	barbutOyun(bahis);
}

void barbutOyun(float bahis){
	int zar1 = 1 + rand() % 6;
	int zar2 = 1 + rand() % 6;
	printf("Atýlan Zar= %d \n", zar1 + zar2);
	switch (zar1+zar2)
	{
	case 7: case 11:
		zafer(bahis);
		break;
	case 2: case 3: case 12:
		bozgun(bahis);
		break;
	default:
		sans((zar1 + zar2), bahis);
		break;
	}
}

void zafer(float bahis){
	printf("Tebrikler Kazandýnýz. \n");
	bakiye += bahis;
	int kontrol;
	printf("Oyuna devem etmek için bir tuþa basýn. Çýkmak için -1'i tuþlayýn.");
	scanf("%d", &kontrol);
	if (kontrol == -1)
		exit(1);
	else
		bakiyeKontrol();
}
void bozgun(float bahis){
	printf("Malesef Kaybettiz. \n");
	bakiye -= bahis;
	int kontrol;
	printf("Oyuna devem etmek için bir tuþa basýn. Çýkmak için -1'i tuþlayýn.");
	scanf("%d", &kontrol);
	if (kontrol == -1)
		exit(1);
	else
		bakiyeKontrol();
}

void sans(int toplam, float bahis){
	int besleme = 1 + rand() % 10000;
	srand(besleme);
	int zar1, zar2;
	do{
		printf("Tekrar zar atýlýyor.\n");
		zar1 = 1 + rand() % 6;
		zar2 = 1 + rand() % 6;
		printf("Atýlan zar= %d \n", zar1 + zar2);
		if (zar1 + zar2 == 7)
			bozgun(bahis);
	}
		while (toplam != (zar1 + zar2));
	zafer(bahis);
}

void bakiyeKontrol(){
	if (bakiye == 0){
		printf("Malesef bakiyeniz kalmadý iyi günler dileriz. \n");
		system("Pause");
		exit(1);
	}
	else if (bakiye > 2000){
		printf("Bugün çok þanslý gününüzdesiniz.\n");
		menu();
	}
	else if (bakiye < 150){
		printf("Züðürt olmak üzeresiniz. \n");
		menu();
	}
	else
	{
		printf("Bol Þanslar\n");
		menu();
	}
	
}