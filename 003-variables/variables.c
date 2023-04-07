#include <stdio.h>
int main()
{

	/*
		Degiskenler
		Temel Degiskenlerimiz char, int, float, double, short, long
		char veritipi-1 byte(8 bit) 0 dan 255(2^8) e kadar deger alabilir.Her bir Deger ASCII Tablosundaki bir degere esdegerdir.
		int veritipi -4 byte (32 bit) -2^16 den 2^16 kadar deger altr.2, 32, 45 gibi degerler int degerlerdir (tamsayr)
		short veritipi (short int) - 2 byte (16 bit) -218 den 218 kadar deger altr.int ile ayndir. sadece alacagr deger aralag farkladr. Yine 2,32, 132 gibi sayrlars shortla ifade edebiliriz.
		long veritipi (long int ) - 8 byte (64 bit) -2^32 den 2^32 kadar deger altr.int ile ayndr. sadece alacag? deger aralig farkladur. Cok büyük sayrlar için kullanzlabilir. 1241234134124214, 215125125125 gibi sayrlar için kullamlabilir. float veritipi Kesirli sayrlar tutmak için kullamlar.Byte' isletim sistemine göre degisebilir. 2.12,3.4 gibi degerler için kullamlabilir. double veritipi Aym float gibi kesirli sayrlar için kullamlar.Ancak floattan daha kapsamlidir.Byte'r isletim sistemine göre degisebilir.
		2.13131341441324, 4.123123124125 gibi degerler için idealdir.
		%d int
		%f float

	*//*
	short number =0;
	printf("madagaskar'da ");
	printf("%d",number);
	printf(" maymun var.");
	printf("\n\n\n");
	int number2 = 345;
	printf("Madagaskarda %d kadar maymun %d kadar bizon var.",number,number2);
	float intager = 3;
	printf("%f",intager);
	char basharfim = 43;
	printf("\n\n\n%c",basharfim);*/

	////////////önemli

	char b1 = 'b';
	char b2 = 66;
	printf("%d %c %c %d\n",b1,b1,b2,b2 );//98 b B 66
	
	///////////
	float pi = 3.14159265358979323846;
	printf("%.2234f \t %.3f",pi,pi); // noktadan sonra yazdığınsayı kadar floatın noktadan sonraki o satı kadarkş basamağını gösterir
	int intager = 45;
	printf("\n\n%10d",intager); //kendinden önce 10 karakter boşluk bıraktı

    /*int sayi;
    printf("Lutfen maymun sayisini giriniz: ");
    scanf("%d", &sayi);
    printf("Madagaskar'da %d maymun var\n", sayi);
*/
	return 0;
}