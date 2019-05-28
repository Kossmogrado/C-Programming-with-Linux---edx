#include <stdio.h>
int main(void)

{
    int nteam = 0;
    int playT1 = 0;
    int playT2 = 0;
    int l = 0;
    int sum1 = 0, sum2 = 0;
    scanf("%d", &nteam);

    for (l=0; l<nteam;l++)                              /* lê o número de jogadores por time e inicia a leitura dos valores de peso */
    {
        scanf("%d %d", &playT1, &playT2);
        sum1 = sum1 + playT1;
        sum2 = sum2 + playT2;

        /* printf("%d %d\n", sum1, sum2); */            /* exibe a soma parcial dos pesos por time, somente para conferir se a rotina de programação está certa */
    }

    if (sum1>sum2)                                      /* compara os totais de peso de cada time e executa o laço if ou else */
    {
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", sum1);
        printf("Total weight for team 2: %d\n", sum2);
    }
    else
    {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", sum1);
        printf("Total weight for team 2: %d\n", sum2);
    }

    return 0;
}

/* #include <stdio.h>
int main() {
    int i;
    int nbMembers = 0;
    int totalWeightTeam1 = 0;
    int totalWeightTeam2 = 0;
    int weightRead = 0;
    scanf("%d", &nbMembers);
    for(i=0; i<nbMembers; i++){
        scanf("%d", &weightRead);
        totalWeightTeam1 = totalWeightTeam1 + weightRead;
        scanf("%d", &weightRead);
        totalWeightTeam2 = totalWeightTeam2 + weightRead;
    }
    int advantageTeam1 = totalWeightTeam1 > totalWeightTeam2;
    if(advantageTeam1){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", totalWeightTeam1);
    printf("Total weight for team 2: %d\n", totalWeightTeam2);
    return 0;
}   */
