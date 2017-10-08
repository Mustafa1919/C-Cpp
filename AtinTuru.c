#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define BOYUT 8

void hamleYap(int[][BOYUT],int[],int[],int [][BOYUT]);
int kontrolEt(const int[][BOYUT],const int[],const int[],int);
int hamle(int[][BOYUT],int[],int[],int,int);
void yazdir(const int[][BOYUT]);
void azalt(int[][BOYUT], int[],int[],int,int);

int main(){
	setlocale(LC_ALL, "Turkish");
	int tahta[BOYUT][BOYUT] = { 0 };
	int erisim[BOYUT][BOYUT] = { { 2, 3, 4, 4, 4, 4, 3, 2 }, { 3, 4, 6, 6, 6, 6, 4, 3 }, { 4, 6, 8, 8, 8, 8, 6, 4 },
		{ 4, 6, 8, 8, 8, 8, 6, 4 }, { 4, 6, 8, 8, 8, 8, 6, 4 }, { 4, 6, 8, 8, 8, 8, 6, 4 },
		{ 3, 4, 6, 6, 6, 6, 4, 3 }, { 2, 3, 4, 4, 4, 4, 3, 2 } };
	int yatay[BOYUT] = { 2, 1, -1, -2, -2, -1, 1, 2 }, dikey[BOYUT] = { -1, -2, -2, -1, 1, 2, 2, 1 };
	srand(time(NULL));
	hamleYap(tahta, yatay, dikey,erisim);
	system("Pause");
}

int hamle(int erisim[][BOYUT],int yatay[],int dikey[],int yatYer,int dikYer){
	int enHamle=9,swap,donen;
	int yataySatir, dikeySutun;
	for (int i = 0; i < BOYUT; i++){
		yataySatir = yatYer + yatay[i];
		dikeySutun = dikYer + dikey[i];
		if (yataySatir>7 || yataySatir<0 || dikeySutun>7 || dikeySutun<0 ){
			
		}
		else
		{
			swap = erisim[yataySatir][dikeySutun];
			if (swap < enHamle){
				donen = i;
			}
		}
	}
	return donen;
}

void hamleYap(int tahta[][BOYUT],int yatay[],int dikey[],int erisim[][BOYUT]){
	int bulunanSatir = 3, bulunanSutun = 4;
	tahta[bulunanSatir][bulunanSutun] = 1;
	int hamleyap,kontrol,tur=0,cikis=1;
	do{
		hamleyap = hamle(erisim, yatay, dikey, bulunanSatir, bulunanSutun);
		kontrol = kontrolEt(tahta, yatay, dikey, hamleyap);
		printf("hamle=%d  kontrol=%d\n", hamleyap, kontrol);
		if (kontrol == 1){
			bulunanSatir += yatay[hamleyap];
			bulunanSutun += dikey[hamleyap];
			tahta[bulunanSatir][bulunanSutun] = 1;
			//erisim[bulunanSatir][bulunanSutun] = 15;
			azalt(erisim, yatay, dikey, bulunanSatir, bulunanSutun);
			tur++;
			printf("%d. tur yapýldý %d & %d noktalarýna.\n", tur, bulunanSatir, bulunanSutun);
			if (tur > 63)
				cikis = -1;
		}
	} while (cikis != -1);
	yazdir(tahta);

}

int kontrolEt(int tahta[][BOYUT], int yatay[], int dikey[], int hamleyap){
	if (tahta[yatay[hamleyap]][dikey[hamleyap]] == 1)
		return -1;
	else
		return 1;
}

void yazdir(int const tahta[][BOYUT]){
	for (int i = 0; i < BOYUT; i++){
		for (int j = 0; j < BOYUT; j++){
			printf("%d   ", tahta[i][j]);
		}
		printf("\n");
	}
}

void azalt(int erisim[][BOYUT], int yatay[],int dikey[],int bulunanSatir,int bulunanSutun){
	for (int i = 0; i < BOYUT; i++){
		erisim[bulunanSatir - yatay[i]][bulunanSutun - dikey[i]]--;
	}
}

