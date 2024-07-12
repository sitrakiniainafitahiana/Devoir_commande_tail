#include <stdio.h>
#include <stdlib.h>


void affichage(char *teste, FILE *fic, char *argv[]) {
    int ligne = 0; 
    int Ligne = 0;       
    
    
    fic = fopen(argv[1], "r");
    if (fic == NULL) {
        printf("Erreur: Impossible d'ouvrir le fichier.\n");
        exit (1);
    }

    

    while (fgets(teste, 10000, fic) != NULL) {
        ligne++;
    }
    fclose(fic);

    
    fic = fopen(argv[1], "r");
    if (fic == NULL) {
        printf("Erreur: Impossible d'ouvrir le fichier.\n");
        exit(1);
    }

   while (fgets(teste, 10000, fic) != NULL) {
        Ligne++;
        if (Ligne > ligne - 10) {
            printf("%s", teste);
        }
    }
    fclose(fic);
}
