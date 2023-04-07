#include <stdio.h>
#include <math.h>
int main ()
{
/*
+x ile y'i toplar.
-x'den y'yi crkarir.
*x ile y'yi carpar.
/x iu y'vr docer.
%x*in y ile bölümünden kalan verir.


x sayrsin art ile çarpar(sonuc degismez yani)
x sayisini ile çarpar (x sayisi eksi ise arti yapar, sayisi arti ise eksi yapar.)
*/

	short x = 3;
	short y = 24;
	short z = -7;
	printf("%d\n",y/x);
	printf("%dtam, kalan:%d\n",22/3,22%3);
	printf("%d\n",-y);
	z = 4;
	printf("%d\n",-z);
/*
	yalan
   int sonuc = 2 ** 3; // 2^3 işlemi gerçekleştirilir ve sonuç değişkene atanır
   printf("2^3 = %d", sonuc); // sonuc konsola yazdırılır
  */

	printf("%.0f\n",pow(2,3));


	int sayi = 360 ;
	sayi += 4;
	sayi *= 2;
	printf("%d\n",sayi);
	int i = 4;
	printf("%d", i++); // 4 
	printf("%d", i++); // 5 
	printf("%d\n", i);  // 6 
	float kok = 0.5;
	printf("%f",pow(64,kok));


	return 0 ; 
}