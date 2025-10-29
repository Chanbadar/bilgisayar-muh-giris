#include<stdio.h>
int main ()
{
	char operator;
	double sayi1,sayi2,sonuc;
	printf("Islem seçin (+,-,*,/)");
	scanf("%c",&operator);
	printf("Ilk Sayiyi Girin: ");
	scanf("%lf",&sayi1);
	printf("Ikinci Sayiyi Girin: ");
	scanf("%lf",&sayi2);
	switch(operator){
		case '+':
			sonuc = sayi1 + sayi2;
			printf("%.2lf + %.2lf = %.2lf\n",sayi1,sayi2,sonuc);
		break;
		case '-':
			sonuc = sayi1 - sayi2;
			printf("%.2lf - %.2lf = %.2lf\n",sayi1,sayi2,sonuc);
		break;
		case '/':
		if(sayi2!=0)
		{
			sonuc = sayi1 / sayi2;
			printf("%.2lf / %.2lf = %.2lf\n",sayi1,sayi2,sonuc);
		} else {printf("Hata: Sifira bolme!\n");}

		break;
		


		default:
		printf("geçersiz islem!\n");

	}
	return 0;

}
