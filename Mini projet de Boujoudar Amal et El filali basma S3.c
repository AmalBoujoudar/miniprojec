#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires avec le temps actuel

    int nombre_cache = rand() % 100 + 1; // Choix d'un nombre aléatoire entre 1 et 100
    int test, nombreDevine;
    int nombretestMax = 10;

    printf("Bienvenue dans le jeu de devinette !\n");
    printf("Je pense à un nombre entre 1 et 100. Essayez de le deviner.\n");

    for (test= 1; test <= nombretestMax;test++) {
        printf("test %d : Entrez votre proposition : ",test);
        scanf("%d", &nombreDevine);

        if (nombreDevine < 1 || nombreDevine > 100) {
            printf("Veuillez entrer un nombre entre 1 et 100.\n");
             test--;
            continue;
        }

        if (nombreDevine < nombre_cache) {
            printf("Trop bas !\n");
        } else if (nombreDevine > nombre_cache) {
            printf("Trop haut !\n");
        } else {
            printf("Félicitations ! Vous avez deviné le nombre en %d  test.\n",  test);
            break;
        }
    }

    if ( test > nombretestMax) {
        printf("Dommage ! Vous n'avez pas réussi à deviner le nombre. Le nombre caché était : %d\n", nombre_cache);
    }

    return 0;
}
