#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#define BOYUT 10
void menu(int []);
void rezervasyon(int,int []);
int kontrol(int, int[]);
int main(){
	setlocale(LC_ALL, "Turkish");
	printf("\t\tDUDE HAVA YOLLARI ÞÝRKETÝNE HOÞGELDÝNÝZ.\n");
	int koltuk[BOYUT] = { 0 };
	menu(koltuk);
}
void menu(int dizi[]){
	int  durum;
	printf("\nSigara içilen bölümden rezervasyon yapmak için 1'e basýnýz.\n");
	printf("Sigara içilmeyen bölümden rezervasyon yapmak için 2'ye basýnýz. ");
	scanf("%d", &durum);
	rezervasyon(durum,dizi);
}

void rezervasyon(int durum,int koltuk[]){
	int kont = kontrol(durum, koltuk);
	if (kont == -1){
		char karakter;
		if (durum == 1){
			printf("Sigaralý bölümde boþ yerimiz kalmamýþ. Sigarsýz bölümden bilet almak ister misiniz.(E/H)");
			karakter = getch();
			if (karakter == 'H' || karakter == 'h')
				printf("BÝr sonraki uçuþ 3 saat sonra. Ýyi günler dileriz.");
			else if (karakter == 'E' || karakter == 'e')
				menu(koltuk);
		}
		else{
			printf("Sigarasýz bölümde boþ yerimiz kalmamýþ. Sigaralý bölümden bilet almak ister misiniz.(E/H)");
			karakter = getch();
			if (karakter == 'H' || karakter == 'h')
				printf("BÝr sonraki uçuþ 3 saat sonra. Ýyi günler dileriz.\n");
			else if (karakter == 'E' || karakter == 'e')
				menu(koltuk);

		}
		
	}
	else
		{
			koltuk[kont] = 1;
			if (durum == 1){
				printf("Sigaralý bölümden %d nolu koltuðu rezervasyon yaptýnýz.\n", kont+1);
			}
			else
			{
				printf("Sigarasýz bölümden %d nolu koltuðu rezervasyon yaptýnýz.\n", kont + 1);
			}
			menu(koltuk);
		}

}
int kontrol(int durum, int koltuk[]){
	if (durum == 1){
		int i = 0;
		while (koltuk[i] != 0 && i<BOYUT){
			i++;
		}
		if (i < BOYUT/2)
			return i;
		else
			return -1;
	}
	else{
		int j = BOYUT-1;
		while (koltuk[j] != 0 && j > BOYUT/3){
			j--;
		}
		if (j >= BOYUT/2)
			return j;
		else
			return -1;
	}
}


