#include <stdio.h>
int main(void)

{
    int ages[10];
    int ageMin = 0;
    int i = 0;

    for (i=0; i<10; i++)
    {
        scanf("%d", &ages[i]);
        if (i==0)
        {
            ageMin=ages[i];
        }
        else if(ages[i]<ageMin)
        {
            ageMin=ages[i];
        }
    }
    printf("%d\n", ageMin);

    return 0;
}
