#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 102;

    srand(time(NULL));
    int nbAleatoire = (rand() % (MAX - MIN + 1)) + MIN;
    int nbALire = 0;

    printf("quel est le nombre ? ");
    scanf_s("%d", &nbALire);
    while (nbALire != nbAleatoire) {

        if (nbALire < nbAleatoire) {
            printf("\nC' est plus !");
        }
        else {
            printf("nC' est moins !");
        }
        printf("\nQuel est le nombre ? ");
        scanf_s("%d", &nbALire);
    }
    printf("\nBravo, vous avez la bonne version -nicMartel !!!");
}