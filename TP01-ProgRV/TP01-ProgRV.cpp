#include <stdlib.h>
#include <stdio.h>
#include <time.h>

///bonjour/

int main() {

    const int MIN = 1;
    const int MAX = 102;

    int compteur = NULL; 
    //char quitter = 'n';

    srand(time(NULL));
    int nbAleatoire = (rand() % (MAX - MIN + 1)) + MIN;
    int nbALire = 0;

    printf("\n\nInscrivez un chiffre et trouver le nombre mystere ! ");
    scanf_s("%d", &nbALire);
    compteur++;
    

    while (nbALire != nbAleatoire) {
        compteur ++;

        if (nbALire < nbAleatoire) {
            printf("\n\n\t\tPLUS HAUT !!");
        }
        else {
            printf("\n\n\t\tPLUS BAS !!");
        }
        printf("\n\nessai no %d ", compteur);
        printf("\nQuel est le nombre ? ");
        scanf_s("%d", &nbALire);
       
    }


    switch (compteur) {
    
        case 1:
            printf("\n\nVotre Score est %d ! Va t'acheter un 6/49!! :) ", compteur);
            break;
        case 2:
            printf("\n\nVotre Score est %d ! Va t'acheter un 6/49!! :) ", compteur);
            break;
        case 3:
            printf("\n\nVotre Score est %d ! t'es benie des dieux!! :) ", compteur);
            break;
        case 4:
            printf("\n\nVotre Score est %d ! Bien fait :) ", compteur);
            break;
        case 5:
            printf("\n\nVotre Score est %d ! c'est bien :) ", compteur);
            break;
        case 6:
            printf("\n\nVotre Score est %d ! pas super :(", compteur);
            break;
        case 7:
            printf("\n\nVotre Score est %d ! assez poche, désolé :(", compteur);
            break;
        case 8:
            printf("\n\nVotre Score est %d ! si j'étais toi, j'irai me coucher, pas une bonne journée! :(", compteur);
            break;
        case 9:
            printf("\n\nVotre Score est %d ! ouyouyouye :(", compteur);
            break;
        case 10:
            printf("\n\nVotre Score est %d ! ca, c'est non :(", compteur);
            break;
        default:
            printf("\n\nVotre Score est %d ! pas fort Championne :(\n\n\n\n", compteur);
            break;
    }
    printf("\n\nBravo, vous avez la bonne version -nicMartel !!!");
}