#include <stdio.h>
#include <math.h>
int main()
{
	float boy;
	float kilo;
	float vki;
	printf("Boyunuzu metre cinsinden giriniz :");
	scanf("%f",&boy);
	printf("\n");
	printf("Ağılığınızı kilogram cinsinden giriniz :");
	scanf("%f",&kilo);
	vki = kilo/pow(boy,2);
	printf("\n vüzut kitle indexiniz: %f",vki);

	return 0 ;
}