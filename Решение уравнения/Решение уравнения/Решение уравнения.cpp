#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x;
	printf("Insert X:\n");
	scanf_s("%lf", &x);
	if (x == -1)
	{
      printf("Division by zero is not allowed");
	}
	else 
	{
	  printf("%lf", sqrt((x+5)/(x+1)));
	}
	return 0;
}