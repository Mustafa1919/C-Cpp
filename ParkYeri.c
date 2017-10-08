#include <stdio.h>
#include <locale.h>

float ucretHesapla(float);

int main(){
	setlocale(LC_ALL,"Turkish");
	float saat1=1.5,saat2=4,saat3=24;
	float ucret1, ucret2, ucret3;
	ucret1=ucretHesapla(saat1);
	ucret2 = ucretHesapla(saat2);
	ucret3 = ucretHesapla(saat3);
	printf("%6s%15s%15s\n","Araba","Saat","Ücret");
	printf("%3d%18.1f%15.2f\n", 1, saat1, ucret1);
	printf("%3d%18.1f%15.2f\n", 2, saat2, ucret2);
	printf("%3d%18.1f%15.2f\n", 3, saat3, ucret3);
	system("Pause");
	return 0;
}

float ucretHesapla(float saat){
	if (saat <= 3.00)
		return 2.00;
	else if (saat >= 24)
		return 10.00;
	else
		return (float)2.00 + ((saat - 3)*0.5);
}