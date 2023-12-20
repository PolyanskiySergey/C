#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Потенциал электростатического поля заряженного шара
double k = 1.38 * pow(10, -23);
double ep = 8.85 * pow(10, -12);
int main()
{
	double fi=0;
	double q = 0;
	double R = 0;
	double r = 0;
	printf("Расчет потенциала электростатического поля заряженного шара");
	printf("Заряд шара q, нКл:");
	scanf_s("%lf", &q);
	printf("Радиус R, см:");
	scanf_s("%lf", &R);
	printf("Радиус r, см:");
	scanf_s("%lf", &r);
	fi = pow(10,12)*k * q*pow(10,-9) / (ep * (R + r)*pow(10,-2));
	printf("Потенциал электростатического поля заряженного шара Fi=%0.10lf пкВ", fi);
	return 0;
}