#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

void islemYaptýr(int, int);
void kontrol(int, int);
void menu();

int main(){
	setlocale(LC_ALL, "Turkish");
	printf("\t Ýlköðretim 1. ve 2. Sýnýflar Ýþlemler Programý \n");
	menu();

}
void menu(){
	int seviye, islem;
	printf("\n1. Seviye Tek basamaklý iþlemler.\n2. Seviye iki basamaklý iþlemler.\nLütfen seviyeyi seçiniz:");
	scanf("%d", &seviye);
	printf("\n1. Toplama\n2. Çýkarma\n3. Çarpma\n4. Bölme\n5. Karýþýk iþlemeler\n");
	printf("Lütfen yapmak istediðiniz iþlemi seçiniz:");
	scanf("%d", &islem);
	printf("\n\n");
	islemYaptýr(seviye, islem);
}

void islemYaptýr(int seviye, int islem){
	srand(time(NULL));
	int sayi1, sayi2, rastgele, sonuc;
	if (seviye == 1){
		sayi1 = rand() % 10;
		sayi2 = rand() % 10;
		switch (islem)
		{
		case 1:
			printf("%d + %d = ", sayi1,sayi2);
			scanf("%d", &sonuc);
			kontrol((sayi1 + sayi2), sonuc);
			break;
		case 2:
			printf("%d - %d = ", sayi1, sayi2);
			scanf("%d", &sonuc);
			kontrol((sayi1 - sayi2), sonuc);
			break;
		case 3:
			printf("%d * %d = ", sayi1, sayi2);
			scanf("%d", &sonuc);
			kontrol((sayi1 * sayi2), sonuc);
			break;
		case 4:
			if (sayi1 > sayi2){
				printf("%d / %d = ", sayi1, sayi2);
				scanf("%d", &sonuc);
				kontrol((sayi1 / sayi2), sonuc);
			}
			else
			{
				printf("%d / %d = ", sayi2, sayi1);
				scanf("%d", &sonuc);
				kontrol((sayi2 / sayi1), sonuc);
			}
			
			break;
		case 5:
			rastgele = 1 + rand() % 4;
			islemYaptýr(seviye, rastgele);
			break;
		}
	}
	else{
		sayi1 = 10 + rand() % 90;
		sayi2 = 10 + rand() % 90;
		switch (islem)
		{
		case 1:
			printf("%d + %d = ", sayi1, sayi2);
			scanf("%d", &sonuc);
			kontrol((sayi1 + sayi2), sonuc);
			break;
		case 2:
			printf("%d - %d = ", sayi1, sayi2);
			scanf("%d", &sonuc);
			kontrol((sayi1 - sayi2), sonuc);
			break;
		case 3:
			printf("%d * %d = ", sayi1, sayi2);
			scanf("%d", &sonuc);
			kontrol((sayi1 * sayi2), sonuc);
			break;
		case 4:
			if (sayi1 > sayi2){
				printf("%d / %d = ", sayi1, sayi2);
				scanf("%d", &sonuc);
				kontrol((sayi1 / sayi2), sonuc);
			}
			else
			{
				printf("%d / %d = ", sayi2, sayi1);
				scanf("%d", &sonuc);
				kontrol((sayi2 / sayi1), sonuc);
			}
			
			break;
		case 5:
			rastgele = 1 + rand() % 4;
			islemYaptýr(seviye, rastgele);
			break;
		}
	}
}

void kontrol(int cevap, int sonuc){
	int tekrar;
	while (cevap != sonuc)
	{
		printf("Yanlýþ cevap lütfen tekrar deneyiniz: ");
		scanf("%d", &sonuc);
	}
	printf("Tebrikler doðru bildiniz.  Yeniden soru çözmek istermisin?\n");
	printf("Devam etmek için herhangi bir tuþa bas çýkmak için -1'e bas.");
	scanf("%d", &tekrar);
	if (tekrar == -1)
		return 0;
	else
		menu();

}