int main(int argc, char *argv[]) {
    char teste[10000];
    int nbr;

    // nombre d'argument (source pdf)
    nbr = atoi(argv[1]);

    affichage(teste, NULL, nbr, argv[2]);

    return 0;
}