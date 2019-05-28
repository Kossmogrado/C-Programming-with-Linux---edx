#include <stdio.h>

int main(void)
{
    int target;
    int i;
    printf("Enter a target number: \n");
    scanf("%d", &target);
    if (target > 0)
    {
        for (i=0; i<target; i++)
        {
            if(i%2) /* se o resultado da divisão não for exato, isto é, tiver resto 1, então executa o looping e exibe o valor de i */
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        printf("Nothing to do!\n");
    }

    return 0;
}
