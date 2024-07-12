#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int nbr = 0;
    char teste[10000];
    FILE *fic = NULL;
    data(teste, fic, argv); 
    affichage(teste, fic, argv);

    return 0;
}