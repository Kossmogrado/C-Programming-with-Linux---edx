#include <stdio.h>

int main (void)
{
    int matches = 0;
    int boxes = 0;
    scanf("%d%d", &matches, &boxes);
    printf("%d\n", matches/boxes); /*divide os inteiros sem exibir resto */
    printf("%d\n", matches%boxes); /*divide os inteiros exibindo somente o resto */

    return 0;
}
