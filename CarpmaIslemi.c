#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>

void yazdir(int);
void degerlendirme(int);

int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int sayac=0,dogru=0,yanlis=0;
	int sayi1, sayi2, sonuc;
	do{
		sayi1 = rand() % 10;
		sayi2 = rand() % 10;
		printf("%d kere %d kaçtýr= ",sayi1,sayi2);
		scanf("%d", &sonuc);
		if (sonuc == (sayi1*sayi2)){
			yazdir(1);
			dogru++;
		}
		else
		{
			yazdir(0);
			yanlis++;
		}
		sayac++;
	} while (sayac<10);
	printf("%d tane doðru %d tane yanlýþ yaptýnýz.\n", dogru, yanlis);
	degerlendirme(yanlis);
	system("Pause");
	return 0;
}

void yazdir(int sonuc){
	srand(time(NULL));
	int sayi = rand() % 4;
	if (sonuc == 1){
		switch (sayi)
		{
			case 0:
				printf("Çok güzel.\n");
				break;
			case 1:
				printf("Mükemmel.\n");
				break;
			case 2:
				printf("Aferin.\n");
				break;
			case 3:
				printf("Böyle devam et.\n");
				break;
		}
	}
	else{
		switch (sayi)
		{
		case 0:
			printf("Hayýr Lütfen Tekrar Deneyin.\n");
			break;
		case 1:
			printf("Yanlýþ.Lütfen bir daha deneyin.\n");
			break;
		case 2:
			printf("Pes etmein.\n");
			break;
		case 3:
			printf("Hayýr.Denemeye devam.\n");
			break;
		}

	}

}

void degerlendirme(int yanlis){
	if (yanlis > 2)
		printf("Öðretmeninden yardým al\n");
}