#include <stdio.h>

int main(void)

{
    int recipe [10];
    int ingredient = 0;
    int cellNum = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &ingredient);       /* L� o valor dos ingredientes e adicion�-o a c�lula do array (recipe) */
        recipe[cellNum]=ingredient;
        cellNum = cellNum + 1;
    }

    scanf("%d", &cellNum);              /* L� o valor da c�lula selecionada e o exibe no printf */
    printf("%d", recipe[cellNum]);

    return 0;
}

/* #include <stdio.h>

int main() {
    int array[10];
    int readValue = 0;
    int index = 0; //indice

    for(int i = 0 ; i < 10 ; i++){
        scanf("%d", &readValue);
        array[index] = readValue;
        index = index + 1;
    }

    scanf("%d", &readValue);
    printf("%d", array[readValue]);
    return 0;
} */
