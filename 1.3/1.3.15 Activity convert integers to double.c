#include <stdio.h>

int main(void)

{
    int grades = 0; /* Inicio e atribuiçao de variáveis */
    int notes = 0;
    int sum = 0;
    double averange = 0;
    int i = 0;
    double dgrades = 0;

    scanf("%d", &grades);
    for (i = 0; i < grades; i++) /* inicia o loop */
    {
        scanf("%d", &notes); /* adquire as notas */
        sum = sum + notes;   /* soma as notas */
    }

    dgrades = (double) grades; /*conversão de int em double */
    averange = sum/dgrades;

    printf("%.2f", averange);

}

/* #include <stdio.h>

int main(void) {
    int num, grade, i;
    int sum = 0;
    double doubSum;

    scanf("%d", &num);
    for(i=0 ; i < num ; i++){
        scanf("%d", &grade);
        sum = sum + grade;
    }
    doubSum = (double) sum;
    printf("%.2lf", doubSum/num);
    return(0);
}                               */
