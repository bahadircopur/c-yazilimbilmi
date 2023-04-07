#include <stdio.h>
int main (){
	int num = 364;
	float pi = 3.141592;
	double pipi = 3.1415927410125;
	char ben = 66;
	short age = 22;
	long life = 31536000; 
	long long int lifes = 3;

	printf("\n%lld%ld\n",lifes,sizeof(lifes)); //8 byte/
	printf("%d değişkeni bellekte %ld byte yer tutuyor\n",num,sizeof(num));
	printf("%f değişkeni bellekte %ld byte yer tutuyor\n",pi,sizeof(pi));
	printf("%f değişkeni bellekte %ld byte yer tutuyor\n",pipi,sizeof(pipi));
	printf("%c değişkeni bellekte %ld byte yer tutuyor\n",ben,sizeof(ben));
	printf("%d değişkeni bellekte %ld byte yer tutuyor\n",age,sizeof(age));
	printf("%ld değişkeni bellekte %ld byte yer tutuyor\n",life,sizeof(life));
	return 0;
	/*
364 değişkeni bellekte 4 byte yer tutuyor
3.141592 değişkeni bellekte 4 byte yer tutuyor
3.141593 değişkeni bellekte 8 byte yer tutuyor
B değişkeni bellekte 1 byte yer tutuyor
22 değişkeni bellekte 2 byte yer tutuyor
31536000 değişkeni bellekte 8 byte yer tutuyor
	*/
}
