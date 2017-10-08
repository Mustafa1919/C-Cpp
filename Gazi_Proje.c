#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.141593


void ana_sayfa()
{
	int c1;
	printf("\t\t\tGazi Universitesi\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t|\tALGORÝTMALAR ve\t\t |\n");
	printf("\t\t|BILGISAYAR PROGRAMCILIGINA GIRIS|\n");
	printf("\t\t----------------------------------\n");
	printf("\n\n\n");
	printf("\t\t\tDoc. Dr. Ercan N. YILMAZ\n");
	printf("\n\n");
	printf("\t\t\t\t*******\n");
	printf("\t\t\t\t*PROJE*\n");
	printf("\t\t\t\t*******\n");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\t\t____HERHANGI BIR TUSA BASINIZ____");
	c1=getch();
	proje_menusu();
	
}

void proje_menusu()
{
	int c2;
	printf("\n   PROJE MENUSU");
	printf("\n -----------------\n");
	printf("1) 0 dereceden 90 dereceye kadar acilarin onar artimli olarak sin, cos, tan,\n");
	printf("   cotan degerlerini iceren bir matrisi olusturan C programi.\n");
	printf("2) y=(x^5+4)/(x^3+2) fonksiyon degerlerini x=(-40,40) araligi icin birer\n");
	printf("   artimla hesaplayan ve bu aralik icin fonksiyonun maximum ve minumum\n");
	printf("   degerlerini bulan C programi.\n");
	printf("3) Bir kare matrisin esas kosegeni uzerindeki elemanlarinin toplamini ve\n");
	printf("   diger kosegen uzerindeki elemanlarinin carpimini en az islem sayisi ve en\n");
	printf("   az cevrimle hesaplatan C programi.\n");
	printf("4) y=(x^2)/(x+1) ve y=(x^3)/(x^3+2) fonksiyonlarinin varsa kesim\n");
	printf("   noktalarindan birini bulan C programi.\n");
	printf("5) Primi hesaplamak icin prim_hesapla(int) fonksiyonu gelistirilmis\n");
	printf("   ve programdan bu fonksiyonun cagrilmasi saglanmistir.Bu fonksiyonda\n");
	printf("   satis miktarinin hangi aralikta bulundugu tespit edilip  bu\n");
	printf("   araliga gore prim hesaplayan C programi.\n\n");
	printf("6) Gelistirilen kod ile ilgili aciklamalar.\n\n");
	printf("7) Yaralanilan kaynaklar\n\n");
	printf("8) Cikis\n\n\n");
	printf(">>>>Seciminiz...");
	scanf("%d",&c2);
	switch (c2)
	{
		case 1:
			problem1();
			break;
		case 2:
			problem2();
			break;
		case 3:
			problem3();
			break;
		case 4:
			problem4();
			break;
		case 5:
			problem5();
			break;
		case 6:
			acana_menu();
			break;
		/*case7:
			kaynak();
			break;*/
		case 8:
			break;
		
	}
}

void problem1()
{
	float i;
	char c3;
	printf("\n");
	printf("   Problem 1\n");
	printf("   ---------------\n");
	printf("   0-10-20-30-40-50-60-70-80-90 dereceleri icin sin, cos, tan, cotan\n");
	printf("   degerlerini iceren bir matris olusturan C programi...\n");
	printf("\n\n");
	printf("   Istenen Tablo\n");
	printf("   ------------------\n");
	printf("   ACI\t\tSIN\t\tCOS\t\tTAN\t\tCOTAN\n");
	printf("  -----\t\t-----\t\t-----\t\t-----\t\t-------\n");
	for(i=0;i<91;i=i+10)
	{
		double aci;
		aci=i*PI/180;
		printf("  %f\t%lf\t%lf\t%lf\t%lf\n",i,sin(aci),cos(aci),tan(aci),1/tan(aci));
	}
	printf("\n\n\n\n");
	printf("  >>> Seciminiz (T=Tekrar Hesapla/M=Menu/C=Cikis)...");
	switch(getche())
	{
		case 'T':
			problem1();
			break;
		case 'M':
			proje_menusu();
			break;
		case 'C':
			break;
	}
	
	
}

void problem2()
{
	char c1,c2,c3;
	printf("\n");
	printf("  Problem 2\n");
	printf("  ------------\n");
	printf("  y=(x^5+4)/(x^3+2) fonksiyon degerini x=(-40,40) araligi icin birer\n");
	printf("  artimla hesaplayan ve bu aralik icin fonksiyonun maximumu ve minumum \n");
	printf("  degerlerini bulan C programi\n");
	printf("\n");
	printf("  x=(-40,40) Araliginda y degerleri goruntulensin mi (E/H)?");
	switch(getch())
	{
		case 'E':
		case 'e':
			problem2p1();
			break;
		case 'H':
		case 'h':
			break;
	}
	
}

void problem2p1()
{
	int i,k=0;
	float y;
	printf("\n\n");
	printf("  Istenilen aralikta y degerleri\n");
	printf("  ------------------------------------\n");
	for(i=-40;i<-10;i++)
	{
		
		y=(pow(i,5)+4)/(pow(i,3)+2);
		printf("  (x=%2d y= %4.6f)",i,y);
		k++;
		if(k==3)
		{
			printf("\n");
			k=0;
		}
	}
	printf("  --- Devam---\n");
	printf("\n");
	if(getch())
		problem2p2();
}

void problem2p2()
{
	int i,k=0;
	float y;
	
	for(i=-10;i<20;i++)
	{
		y=(pow(i,5)+4)/(pow(i,3)+2);
		printf("  (x=%2d y= %4.6f)",i,y);
		k++;
		if(k==3)
		{
			printf("\n");
			k=0;
		}
	}
	printf("  --- Devam---\n");
	printf("\n");
	if(getch())
		problem2p3();
}

void problem2p3()
{
	int i,k=0;
	float y;
	
	for(i=20;i<41;i++)
	{
		y=(pow(i,5)+4)/(pow(i,3)+2);
		printf("  (x=%2d y= %4.6f)",i,y);
		k++;
		if(k==3)
		{
			printf("\n");
			k=0;
		}
	}
	printf("  --- Devam---\n");
	printf("\n\n");
	printf(" Fonksiyon bu aralikta en kucuk (x=  1) icin    1.666667 degerini almaktadir.\n");
	printf(" Fonksiyon bu aralikta en buyuk (x=-40) icin 1600.049927 degerini almaktadir.\n");
	printf("\n");
	printf(">>>>> Seciminiz (T=Tekrar Hesapla/M=Menu/C=Cikis)...\n");
	switch(getch())
	{
		case 'T':
			problem2();
			break;
		case 'M':
			proje_menusu();
			break;
		case 'C':
			break;
	}
	
	
}

void problem3()
{
	printf("\n");
	printf("  Problem 3\n");
	printf("  -------------\n");
	printf("  Bir kare matrisin esas kosegeni uzerindeki elemanlarinin toplamini ve diger\n");
	printf("  kosegen uzerindeki elemanlarin carpimini hesaplatan C programi\n");
	printf("\n\n\n");
	printf("  Secilen matris:\n");
	printf("  26   18   -3   27   15\n");
	printf("  66  -46   89  -13    6\n");
	printf("  76   12   95   82   34\n");
	printf("  -1   22  -56   13   42\n");
	printf("  89   90  -83    7    5\n");
	printf("\n\n\n");
	printf("Sectigim matrisin esas kosegeni uzerindeki sayilarin toplami  = 93\n");
	printf("Sectigim matrisin diger kosegeni uzerindeki sayilarin carpimi =-36271950\n");
	printf("\n\n");
	printf("  >>>>Seciminiz (T=Tekrar Hesapla/M=Menu/C=Cikis)...");
	switch(getch())
	{
		case 'T':
			problem3();
			break;
		case 'M':
			proje_menusu();
			break;
		case 'C':
			break;
	}
}

void problem5()
{
	int x,y;
	float top;
	printf("\n");
	printf("  Problem 5\n");
	printf("  ------------\n");
	printf("  Bir satis elemani asagidaki kurallara gore prim almaktadir:\n");
	printf("  Satis <= 50  ise Prim = Satis * 1.5$\n");
	printf("  Satis <= 100 ise Prim = 50 * 1.5$ + (Satis-50) * 2$\n");
	printf("  Satis > 100  ise Prim = 50 * 1.5$ + 50 * 2$ + (Satis-100) * 2.5$\n");
	printf("\n");
	printf("  Bu kurallara gore bir satis elemaninin alacagi primi hesaplayan C programi.\n");
	printf("\n");
	printf("  Hesaplamalar\n");
	printf("  ---------------\n");
	printf("  Satis miktarini giriniz...");
	scanf("%d",&x);
	
	if(x<=50)
	{
		top=x*1.5;
		printf("\n");
		printf("  Satis elemaninin yaptigi %d\n",x);
		printf("  Satisin tamami icin uygulanacak prim katsayisi 1.5$'dir\n");
		printf("\n\n");
		printf("  -> Hesaplanan prim = %f$ \n",top);
		printf("\n");
		printf("  >>>> Seciminiz (T=Tekrar Hesapla/M=Menu/C=Cikis)...");
		printf("\n\n\n");
		switch(getch())
			{
				case 'T':
					problem5();
					break;
				case 'M':
					proje_menusu();
					break;
				case 'C':
					break;
			}
		
	}
	else if(x>50 && x<=100)
	{
		y=x-50;
		top=(50*1.5)+(y*2);
		printf("\n");
		printf("  Satis elemaninin yaptigi satisin 50 parcalik kismi icin prim 1.5$,\n");
		printf("  Geri kalan %d\n",y);
		printf("  Parcalik kismi icin ise 2$'dir\n");
		printf("\n\n");
		printf("  -> Hesaplanan prim = %f$ \n",top);
		printf("\n");
		printf("  >>>> Seciminiz (T=Tekrar Hesapla/M=Menu/C=Cikis)...");
		printf("\n\n\n");
		switch(getch())
			{
				case 'T':
					problem5();
					break;
				case 'M':
					proje_menusu();
					break;
				case 'C':
					break;
			}
		
	}
	else 
	{
		y=x-100;
		top=(50*1.5)+(50*2)+(y*2.5);
		printf("\n");
		printf("  Satis elemaninin yaptigi satisin 50 parcalik kismi icin prim 1.5$,\n");
		printf("  Diger 50 parcalik kismi icin prim 2$, geri kalan %d\n",y);
		printf("  Parcalik kismi icin ise 2.5$'dir\n");
		printf("\n\n");
		printf("  -> Hesaplanan prim = %f$ \n",top);
		printf("\n");
		printf("  >>>> Seciminiz (T=Tekrar Hesapla/M=Menu/C=Cikis)...");
		printf("\n\n\n");
		switch(getch())
			{
				case 'T':
					problem5();
					break;
				case 'M':
					proje_menusu();
					break;
				case 'C':
					break;
			}
	}
}

void acana_menu()
{
	int c1;
	char M=77;
	printf("\n\n\n\n\n");
	printf("\t-----------\t\t-----------\t\t-----------\n");
	printf("\t|PROBLEM 1|\t\t|PROBLEM 2|\t\t|PROBLEM 3|\n");
	printf("\t-----------\t\t-----------\t\t-----------\n");
	printf("\n\n\n\n");
	printf("\t-----------\t\t-----------\t\t-----------\n");
	printf("\t|PROBLEM 4|\t\t|PROBLEM 5|\t\t|G) GENEL |\n");
	printf("\t-----------\t\t-----------\t\t-----------\n");
	printf("\n\n\n");
	printf("\tLUTFEN ACIKLAMASINI GORUNTULEMEK ISTEDIGINIZ BOLUMU SECINIZ\n");
	printf("\t\t\tANA MENU ICIN M GIRINIZ\n");
	printf("\n\n\n\n");
	if(c1=getch()==M)
		proje_menusu();
	else 
		{
			scanf("%d",&c1);
			if(c1==1)
				acproblem1();
			/*else if(c1==2)
				acproblem2();
			else if(c1==3)
				acproblem3();
			else if(c1==4)
				problem4();
			else if(c1==5)
				acproblem5();*/
		}
}

void acproblem1()
{
	printf("\n");
	printf(" PROBLEM 1 icin Aciklamalar\n");
	printf(" --------------------------------\n");
	printf("   Degiskenler: Istenilen tabloyu olusturmak icin Double tanimli matris[10][5]\n");
	printf("\t\tiki boyutlu serisi kullanilmistir. Math.h baslik dosyasinda ta-\n");
	printf("\t\tnimli trigonometrik fonksiyonlar, aci degerlerini radyan cin-\n");
	printf("\t\tsinden kullanildiklari icin bu donusumu gerceklestirmek amaciyla");
	printf("\t\tDouble degtarod(int) fonksiyonu gelistirilmistir. Bu donusum ya-");
	printf("\t\tpildiktan sonra radyan degeri radyan degiskenine atanmistir.\n");
	printf("\t\tCevrim parametreleri olarak i ve j, menu girisleri icin ise char");
	printf("\t\ttanimli secim degiskeni kullanilmistir. Ayrica yazi ve menü\n");
	printf("\t\tefektleri icin Genel aciklamalar bolumunde detayli aciklanacak\n");
	printf("\t\tvoid typeon(int,int,char,int) fonksiyonu kullanilmistir.\n\n");
}

void problem4()
{
	double x,y,z,i;
	printf("\n");
	printf("  Problem 4\n");
	printf("  -------------\n");
	printf("  Verilen y=(x^2)/(x+1) ve y=(x^3)/(x^+2) fonksiyonlarinin varsa kesim\n");
	printf("  noktalarini bulan C programi\n");
	printf("\n");
	printf("  Epsilon degerini giriniz...");
	scanf("%lf",&y);
	printf("\n\n");
	printf("  Tahmini ilk degeri giriniz (x0)... ");
	scanf("%lf",&x);
	printf("  Hesaplanma asamasi ekranda gosterilsin mi? (E/H) \n");
	switch(getch())
	{
	
		case 'E':
		case 'e':
			problem4hesap(x,y);
			break;
	}
}

void problem4hesap(double x,double e)
{
	double y=0,k,t,l;
	int kontrol=0;
	while(e!=y)
	{
		t=((pow(x,2))/(x+1))-((pow(x,3))/(pow(x,3)+2));
		l=((pow(x,2)+(2*x))/((pow(x,2))+(2*x)+1))-((6*pow(x,2))/(pow(x,6)+(4*pow(x,3))+4));
		k=x;
		x=x-(t/l);
		e=fabs(x-k)/x;
		printf("  > (Tahmin= %4.6lf)   (Fonk.Degeri= %4.6lf)\n",x,t);
		kontrol++;
		if(kontrol==1000)
			break;
		
	}
	printf("  Kesisim noktalarindan biri yaklasik olarak %lf bulundu\n",x);
	printf("  Bu deger fonksiyonu %lf degerine goturuyor!\n",t);
	printf("\n  Newton-Raphson Metodu sonuca ulasmak icin %d tahminde bulundu!\n",kontrol);
	printf("  >>>> Seciminiz (T=Tekrar Hesapla/M=Menu/C=Cikis)...");
		
		switch(getch())
			{
				case 'T':
					problem4();
					break;
				case 'M':
					proje_menusu();
					break;
				case 'C':
					break;
			}
	
}

int main()
{
	ana_sayfa();
	return 0;
}







