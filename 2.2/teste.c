#include <stdio.h>
int main(void)

{
    int menor = 0;
    int i = 0;
    int notas[i];

    for (i=0; i<9; i++)
    {
        scanf("%d", &notas[i]);
        if(notas[i]<menor)
        {
            menor = notas[i];
        }

    }
    printf("%d\n", menor);

    return 0;
}

