#include <stdio.h>

int main(void)

{
    double train [50];
    int boxcars = 0;
    int convoy = 0;
    double weight = 0;
    double totalWeight = 0;
    int i = 0;

    scanf("%d", &boxcars);

    for (i = 0; i < boxcars; i++)
    {
        scanf("%lf", &weight);
        train[convoy]=weight;
        convoy = convoy + 1;
        totalWeight = totalWeight + weight;
    }

    double mean = totalWeight/boxcars; /*calcula a média do peso total sobre o número de vagões */
    convoy = 0;

    for (i = 0; i< boxcars; i++)
    {

        printf("%.1f\n", mean-train[convoy]);
        convoy = convoy + 1;
    }

    return 0;
}

/* #include <stdio.h>

int main(void)
{
    int nbBoxCars, carNumber;
    double weights[50];
    double totalWeight = 0.0;
    double averageWeight;

    scanf("%d\n",&nbBoxCars);
    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        scanf("%lf",&weights[carNumber]);
        totalWeight = totalWeight + weights[carNumber];
    }

    averageWeight = totalWeight / nbBoxCars;

    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        printf("%.1lf\n",averageWeight - weights[carNumber]);
    }
    return 0;
} */
