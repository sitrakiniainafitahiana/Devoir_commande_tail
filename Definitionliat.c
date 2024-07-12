#include <stdio.h>
#include <stdlib.h>

void affichage(char *teste, FILE *fic, int nbr, char *nom_fichier) {
    FILE *file = fopen(nom_fichier, "r");
    if (file == NULL) {
        printf("Erreur: Impossible d'ouvrir le fichier '%s'.\n", nom_fichier);
        exit(1);
    }

    // nombre totale de ligne
    int lines = 0;
    while (fgets(teste, 10000, file) != NULL) {
        lines++;
    }
    fclose(file);

    // 2 ièème ouverture du fichier.
    file = fopen(nom_fichier, "r");
    if (file == NULL) {
        printf("Erreur: Impossible d'ouvrir le fichier '%s'.\n", nom_fichier);
        exit(1);
    }

    int Line = 0;
    while (fgets(teste, 10000, file) != NULL) {
        Line++;
        if (Line > lines - nbr) {
            printf("%s", teste);
        }
    }
    fclose(file);
}
