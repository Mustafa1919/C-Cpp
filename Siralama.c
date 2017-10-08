#include<stdio.h>
#include<locale.h>
#define BOY 10
void hizliSiralama(int [],int,int);
void yerdegistir(int [],int,int);
int main(){
	setlocale(LC_ALL,"Turkish");
	int i;
	int liste[BOY]={37,2,6,4,89,8,10,12,68,45};
	hizliSiralama(liste,0,9);
	for(i=0;i<BOY;i++)
		printf("%4d",liste[i]);
	return 0;
}

void hizliSiralama(int wListe[],int bas,int son){
	int knt1=son,knt2=bas;
	while(wListe[bas]<wListe[knt1]){
		knt1--;
	}
	yerdegistir(wListe,bas,knt1);
	while(wListe[knt1]>wListe[knt2+1]){
		knt2++;
		if(knt1==knt2+1)
			break;
	}
	yerdegistir(wListe,knt1,knt2+1);
	while(wListe[knt2+1]<wListe[knt1-1]){
		knt1--;
		if(knt1-1==knt2+1)
			break;
	}
	yerdegistir(wListe,knt1-1,knt2+1);
	while(wListe[knt2+2]<wListe[knt1-1]){
		knt2++;
		if(knt2+2==knt1-1)
			break;
	}
	yerdegistir(wListe,knt1-1,knt2+2);
/*	if(bas!=knt2+2)
		hizliSiralama(wListe,bas,)*/
		
}

void yerdegistir(int yListe[],int deger1,int deger2){
	int tmp;
	tmp=yListe[deger1];
	yListe[deger1]=yListe[deger2];
	yListe[deger2]=tmp;
}
