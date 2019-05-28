#include <stdio.h>
int main(void)

{
    int ages[10];
    int ageMin = 0;
    int i = 0;

    for (i=0; i<10; i++)
    {
        scanf("%d", &ages[i]);
        ageMin = ages[0];
    }
    for (i=0; i<10; i++)
    {
    if(ages[i]<ageMin)
        {
            ageMin = ages[i];
        }
    }

    printf("%dMin\n", ageMin);

    return 0;
}
