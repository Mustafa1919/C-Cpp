#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define BOYUT 13
void yazdir(const int[]);
int main(){
	setlocale(LC_ALL, "Turkish");
	int besleme = 1 + rand() % 1000;
	srand(besleme);
	int zar1, zar2;
	int frekans[BOYUT] = { 0 };
	for (int i = 0; i < 36000; i++){
		zar1 = 1 + rand() % 6;
		zar2 = 1 + rand() % 6;
		frekans[zar1 + zar2]++;
	}
	yazdir(frekans);
	system("Pause");
	return 0;
}

void yazdir(const int dizi[]){
	
	for (int i = 2; i < BOYUT; i++){
		printf("Toplamý %3d olan sayý %5d defa geldi.\n",i,dizi[i]);
	}
}