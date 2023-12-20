#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i=1;
    double l;
    double a = 0;
    double w;
FILE* fp= fopen("data.txt", "r");
char str[80];
if (fp)
{
    while (fgets(str, 80, fp) != NULL)
        if (str[0] == 'D')
        {
            printf("%s\n", str);
            sscanf(str,"Data,%lf,%lf", &l, &w);
            printf("%.1lf %.1lf\n", l, w);
            printf("\n");
            a = (a*(i-1) + l)/i;
            ++i;
            printf("%.2lf\n", a);
            printf("\n");
        }
fclose(fp);
}
return 0;
}
