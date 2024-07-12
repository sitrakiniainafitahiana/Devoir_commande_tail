#include <stdio.h>
#include <stdlib.h>


void data(char *teste, FILE *fic, char *argv[]) {
    int nbr = 0;
    fic = fopen(argv[1], "r");
    if (fic == NULL) {
        printf("erreur\n");
        exit(1);
    } else {
        while (fgets(teste, 10000, fic) != NULL) {
            nbr++; // nombre de ligne.
        }
    }
    fclose(fic);
}
