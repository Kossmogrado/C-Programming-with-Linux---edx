/* As you cross a forest you can't help but admire the nature around you including the many species of trees.
Despite your interest, you are a very unskilled botanist and have a lot of trouble identifying different trees.
A friend gives you some guidance and you decide to write a program that will give you the name of the tree based on its characteristics.

There are 4 types of trees:

the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets

the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets

the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets

the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets

Your program should read the height and the number of leaflets of a given tree (both integers), and should be able to determine and display the name of the corresponding tree.
If the height and number of leaflets does not match any of the tree type descriptions, your program should display "Uncertain" */


#include <stdio.h>

int main (void)

{
    int Tinuviel, Calaelen, Falarion, Dorthonion, Uncertain;
    int high, leaflet;

    scanf("%d %d", &high, &leaflet);

    Tinuviel = (high<=5)&&(leaflet>=8);                         /*Compara as variáveis de altura e número de folhas */
    Calaelen = (high>=10)&&(leaflet>=10);
    Falarion = (high<=8)&&(leaflet<=5);
    Dorthonion = (high>=12)&&(leaflet<=7);
    Uncertain = !(Tinuviel||Calaelen||Falarion||Dorthonion);    /* Se todas as árvores não corresponderem a um valor real, então o valor zero passa a ser um */

    if (Tinuviel){
        printf("Tinuviel\n");
    }
    if (Calaelen){
        printf("Calaelen\n");
    }
    if (Falarion){
        printf("Falarion\n");
    }
    if (Dorthonion){
        printf("Dorthonion\n");
    }
    if (Uncertain){
        printf("Uncertain\n");
    }

    return 0;
}

/* #include <stdio.h>
int main() {
    int height = 0;
    int nbLeaflets = 0;
    scanf("%d %d", &height, &nbLeaflets);
    int tinuviel = height <= 5 && nbLeaflets >= 8;
    int calaelen = height >= 10 && nbLeaflets >= 10;
    int falarion = height <= 8 && nbLeaflets <= 5;
    int dorthonion = height >= 12 && nbLeaflets <= 7;
    if(tinuviel) {
        printf("Tinuviel");
    }
    if(calaelen){
        printf("Calaelen");
    }
    if(falarion){
        printf("Falarion");
    }
    if(dorthonion){
        printf("Dorthonion");
    }
    if(!tinuviel && !calaelen && !falarion && !dorthonion){
        printf("Uncertain");
    }
    return 0;
} */
