#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#define BOYUT 10

void yazdir(const int[]);

int main(){
	setlocale(LC_ALL, "Turkish");
	int dizi[BOYUT] = { 12, 8, 3, 7, 15, 25, 2, 6, 11, 16 };
	int swap;
	yazdir(dizi);
	printf("\n");
	for (int i = 0; i < BOYUT-1; i++){
		int sayac = 0;
		for (int j = 0; j < BOYUT-1-i; j++){
			if (dizi[j]>dizi[j+1]){
				swap = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = swap;
				sayac++;
			}
		}
		if (sayac==0)
			break;
	}
	printf("\n");
	yazdir(dizi);
	system("Pause");

}
void yazdir(const dizi[]){
	for (int i = 0; i < BOYUT; i++)
		printf("%d  ", dizi[i]);
	printf("\n");
}