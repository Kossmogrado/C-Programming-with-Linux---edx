/* You want to determine the number of cities in a given region that have a population strictly greater than 10,000.
To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers). */

#include <stdio.h>

int main(void)
{
    int cities, population, i = 0;
    int citiesM=0;

    scanf("%d", &cities);

    for (i=0; i<cities; i=i+1)
    {
        scanf("%d", &population);
        if (population>10000)
        {
            citiesM=citiesM+1;
        }
    }

    printf("%d", citiesM);

    return 0;
}

/* #include <stdio.h>

int main(void){
    int nbCities;
    scanf("%d", &nbCities);
    int nbBigCities = 0;
    for(int i = 0; i < nbCities ; i++)
    {
        int population;
        scanf("%d", &population);
        if(population > 10 * 1000)
        {
            nbBigCities = nbBigCities + 1;
        }
    }
    printf("%d", nbBigCities);
    return 0;
} */
