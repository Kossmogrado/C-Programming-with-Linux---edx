#include <stdio.h>

int main(void)

{
    int population = 0;
    double percent = 0;
    double grow = 0;

     scanf("%d", &population);
     scanf("%lf", &percent);

     grow = (population*(percent/100));

     printf("%f\n", grow);

     population = population + grow;

     printf("%d", population);

     return 0;
}

/* #include <stdio.h>

int main(void) {
    int current, futureInt;
    double growth, futureDoub;

    scanf("%d", &current);
    scanf("%lf", &growth);
    futureDoub = current * (1 + growth / 100);
    futureInt = (int) futureDoub;
    printf("%d", futureInt);
    return(0);
} */
