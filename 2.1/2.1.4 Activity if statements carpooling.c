#include <stdio.h>

int main (void)

{
    int passengers = 0;
    double gas = 23.9;
    double sum = 0;
    int ride = 0;
    int teste = 0;


    scanf("%d",&passengers);
    scanf("%lf",&gas);
    teste = passengers<=0;

    if (teste)
    {
        printf("%.2f\n", gas);
    }
   else
    {
        sum = 1 + gas;
        ride = passengers + 1;
        printf("%.2f",(sum/ride));
    }

    return 0;
}
