#include <stdio.h>
int main(void)

{
    int ages[10];
    int ageMin = 0;
    int i = 0;

    for (i=0; i<10; i++)
    {
        scanf("%d", &ages[i]);  /*L� 10 valores inseridos pelo usu�rio e os atribui a cada elemento do array*/
        if(ages[i]>ageMin)      /*Se os valores do elemento forem maiores que o elemento ageMin, atribui a ageMin o valor do elemento*/
        {
            ageMin = ages[i];
        }
    }

    for (i=0; i<10; i++)
    {
        if(ages[i]<ageMin)     /*L� os valores inseridos anteriormente no array e compara com o valor final atribuido a ageMin*/
        {                      /*Se os valores do elemento forem menores que o elemento ageMin, atribui a ageMin o valor do elemento*/
            ageMin=ages[i];
        }
    }


    printf("The minimum age is %d\n", ageMin);
    printf("The diference with the youngest person is: \n");
    for (i=0; i<10; i++)
    {
        printf("%d:%d\n", ages[i], ages[i]-ageMin);
    }
    return 0;
}
