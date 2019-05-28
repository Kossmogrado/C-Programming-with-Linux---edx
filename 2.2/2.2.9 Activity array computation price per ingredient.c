/* You plan to make a delicious meal and want to take the money you need to buy the ingredients.
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need.
The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound.
Finally your program should read the weight necessary for the recipe (for each ingredient in the same order).
Your program should calculate the total cost of these purchases, then display it with 6 decimal places.
Example
There are 4 ingredients and they all have a different price per pound: 9.90, 5.50, 12.0, and 15.0.
You must take 0.25 lbs of the first, 1.5 lbs of the second, 0.3 lbs of the third and 1 lb of the fourth.
It will cost exactly $29.325000. */

#include <stdio.h>

int main(void)

{
    double ingredients [10];
    double price [10];
    int numIng, i = 0;
    double qty, pounds = 0;

    scanf("%d", &numIng); /* Le o número de ingredietes */

    for (i=0; i < numIng; i++) /* Loop que le a quantidade de cada ingrediente em pounds */
    {
        scanf("%lf", &qty);
        ingredients[i]=qty;
    }

    for (i=0; i < numIng; i++) /* Loops que le o preço dos ingredientes por pounds */
    {
        scanf("%lf", &pounds);
        price[i]=pounds;
    }

    double priceQty, Total=0;
    for (i=0; i < numIng; i++)  /* Loop que calcula o preço total de todos os ingredientes */
    {
        priceQty=(ingredients[i]*price[i]);
        Total=priceQty+Total;
    }

    printf("%.6f", Total);

    return 0;
}

/* #include <stdio.h>

int main()
{
    int nbIngredients=0;
    int i, idIngredient;
    double price[10];
    double totalPrice = 0.0;
    double readPrice=0.0;

    scanf("%d", &nbIngredients);

    for(i = 0; i < nbIngredients; i++){
        scanf("%lf",&readPrice);
        price[i] = readPrice;
    }

    for (idIngredient = 0; idIngredient < nbIngredients; idIngredient++)
    {
        double quantity;
        scanf("%lf\n",&quantity);
        totalPrice = totalPrice + price[idIngredient] * quantity;
    }
    printf("%lf\n",totalPrice);

    return 0;
} */
