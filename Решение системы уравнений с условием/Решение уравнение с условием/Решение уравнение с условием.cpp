#include <stdio.h>
#include <math.h>
int main()
{
	double x;
	scanf_s("%lf", &x);
	if (x == 0)
		printf("X=0: Y=0\n");
	if (x<0)
		printf("X<0: Y=%lf\n",5*x*x);
	if (x>0)
		printf("X>0: Y=%lf\n", (pow(x,3)+1)/(pow(x,2)+1));
	return 0;
}