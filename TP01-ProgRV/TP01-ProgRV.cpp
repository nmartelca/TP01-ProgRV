#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*• Faites un compteur de « coups ». Ce compteur devra être une variable que vous incrémenterez à chaque fois que vous
passez dans la boucle. Lorsque l'utilisateur a trouvé le nombre mystère, vous lui direz « Bravo, vous avez trouvé le
nombre mystère en 8 coups » par exemple.
• Lorsque l'utilisateur a trouvé le nombre mystère, le programme s'arrête. Pourquoi ne pas demander s'il veut faire une
autre partie ?
• Implémentez un mode 2 joueur ! Attention, je veux qu'on ait le choix entre un mode 1 joueur et un mode 2 joueurs.
• Créez plusieurs niveaux de difficulté. Au début, faites un menu qui demande le niveau de difficulté. Par exemple :
1 = entre 1 et 100 ; 2 = entre 1 et 1000 ; 3 = entre 1 et 10000.
Schématiser votre algorithme dans un organigramme en utilisant du Pseudo-code
Rédiger un rapport de tests fonctionnels */

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