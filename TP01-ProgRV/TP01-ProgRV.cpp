#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() { 

    /*Les Variables et les constantes*/
    char autrePartie = 'o'; 

    const int MIN = 1;
    int MAX = NULL;

    int compteur = NULL; 
    int nbDeJoueurs = NULL;
    int compteur2Joueurs = NULL;
    int nivDifficulte = NULL;


    printf("\n\nLe Super Jeux va Commencer ! ");
    printf("\n\nQuel niveau de difficulté ? (facile = 1, moyen = 2, dicile = 3)");
    scanf_s("%d", &nivDifficulte);

    if (nivDifficulte == 1){
        MAX = 100;
    }
    else if (nivDifficulte == 2){
        MAX = 1000;
    }
    else if (nivDifficulte == 3) {
        MAX = 10000;
    }
    else{
        printf("\n\nChoisi ton maximum! (entre 2 et 100 000)");
        scanf_s("%d", & MAX);
    }

    srand(time(NULL));
    int nbAleatoire = (rand() % (MAX - MIN + 1)) + MIN;
    int nbALire = 0;

    printf("\n\nCombien de joueurs ? ");
    scanf_s("%d", &nbDeJoueurs);

    while (nbDeJoueurs >2){

        printf("\nOn peut juste jouer à un ou à deux, fait pas la smatte !");
        printf("\n\nCombien de joueurs pour vrai ? ");
        scanf_s("%d", &nbDeJoueurs);
    }

    switch (nbDeJoueurs){
    case 1:

        printf("\n\nInscrivez un chiffre et trouver le nombre mystere ! ");
        scanf_s("%d", &nbALire);
        compteur++;


        while (nbALire != nbAleatoire) {
            compteur++;

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
        break;
    case 2: 
        printf("\n\nJoueur no1, inscrivez un chiffre ! ");
        scanf_s("%d", &nbALire);
        compteur++;


        while (nbALire != nbAleatoire) {
            compteur++;

            if (nbALire < nbAleatoire) {
                printf("\n\n\t\tPLUS HAUT !!");
            }
            else {
                printf("\n\n\t\tPLUS BAS !!");
            }
            if (compteur % 2 == 0){
                printf("\n\nessai no %d ", compteur);
                printf("\nJoueur no2, inscrivez un chiffre ! ");
                scanf_s("%d", &nbALire);
            }
            else{
                printf("\n\nessai no %d ", compteur);
                printf("\nJoueur no1, inscrivez un chiffre ! ");
                scanf_s("%d", &nbALire);
            }
            
        }
        break;
    default:
        break;
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
            printf("\n\nVotre Score est %d ! assez poche, desole :(", compteur);
            break;
        case 8:
            printf("\n\nVotre Score est %d ! si j'etais toi, j'irai me coucher, pas une bonne journee! :(", compteur);
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

    printf("\n\nune autre partie?  ");
    scanf_s("%lf", &autrePartie);

    printf("\n\nBravo, vous avez la bonne version -nicMartel !!!");


}