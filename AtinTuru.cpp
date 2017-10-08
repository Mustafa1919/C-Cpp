#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define BOYUT 8
int hamleYap(int[][BOYUT], int[], int[]);
int kontrolEt(int[][BOYUT], int, int);
int main(){
	setlocale(LC_ALL, "Turkish");
	int tahta[BOYUT][BOYUT] = { 0 };
	int yatay[BOYUT] = { 2, 1, -1, -2, -2, -1, 1, 2 };
	int dikey[BOYUT] = { -1, -2, -2, -1, 1, 2, 2, 1 };
	srand(time(NULL));
	printf("Toplam %d hamle olmuþtur.\n",hamleYap(tahta, yatay, dikey));
	system("Pause");
	return 0;
} 

int hamleYap(int tahta[][BOYUT],int yatay[],int dikey[]){
	int bulunanSatir = 3, bulunanSutun = 4, hamle, kontrol, tur=0;
	tahta[bulunanSatir][bulunanSutun] = 1;
	do{
		hamle = rand() % 8;
		bulunanSatir += yatay[hamle];
		bulunanSutun += dikey[hamle];
		kontrol = kontrolEt(tahta, bulunanSatir, bulunanSutun);
		if ( kontrol == 1){
			tahta[bulunanSatir][bulunanSutun] = 1;
			tur++;
			printf("%d. hamlae yapýldý.\n", tur);
		}
		else
			kontrol = 0;
	} while (kontrol == 1);
	return tur;
	
}

int kontrolEt(int tahta[][BOYUT], int bulunanSatir, int bulunanSutun){
	printf("Tahta=%d\nsatýr=%d\nsutun=%d\n", tahta[bulunanSatir][bulunanSutun], bulunanSatir, bulunanSutun);
	if (tahta[bulunanSatir][bulunanSutun] == 1 || bulunanSatir > 7 || bulunanSatir<0 || bulunanSutun>7 || bulunanSutun < 0)
		return -1;
	else
		return 1;
}