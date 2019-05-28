#include <stdio.h>

int main (void)
{
    double fh = 0;
    double celsius = 0;
    double c1 = 9;
    double c2 = 5;
    double c3 = 32;
     scanf("%lf", &celsius);
     fh = ((celsius*(c1/c2))+c3);
     printf("%.1f", fh);

     return 0;
}
