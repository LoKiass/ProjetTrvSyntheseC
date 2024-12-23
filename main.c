//PRJTRV5 : Introduction de tableau manuellement
// Plusieurs type de tableau : Char et int, 0 de cloture nécesaire pour fermer la lecture du tableau pour des char
#include <stdio.h>
#include <conio.h>

int main(void) {
    int TailleTab = 4; //Taille du tableau
    int Tx[TailleTab], x = 0; // X etant l'indice de notre tableau
    char Tc[TailleTab+1]; //En comptant le 0 de clôture
    float Tf[TailleTab];

    // Entré manuelle d'un tableau d'entier numérique
    printf("Tableau d'entier");
    printf("\n-> Valeur N.0 Tableau Entier: ");
    scanf("%d", &Tx[x]); getchar();
    x++;
    printf("\n-> Valeur N.1 Tableau Entier: ");
    scanf("%d", &Tx[x]); getchar();
    x++;
    printf("\n-> Valeur N.2 Tableau Entier: ");
    scanf("%d", &Tx[x]); getchar();
    x++;
    printf("\n-> Valeur N.3 Tableau Entier: ");
    scanf("%d", &Tx[x]); getchar();
    x++;
    printf("\n\t * N.0 valeur : %d\n\t * N.1 valeur : %d\n\t * N.2 valeur : %d\n\t * N.3 valeur : %d", Tx[0], Tx[1], Tx[2], Tx[3]);
    x = 0;

    //Entre manuelle tableau de charactere
    printf("Tableau de charactere (Ou chaine de charactere");
    printf("Tableau d'entier");
    printf("\n-> Valeur N.0 Tableau Charactere: ");
    Tc[x] = getch();
    x++;
    printf("\n-> Valeur N.1 Tableau Charactere: ");
    Tc[x] = getch();
    x++;
    printf("\n-> Valeur N.2 Tableau Charactere: ");
    Tc[x] = getch();
    x++;
    printf("\n-> Valeur N.3 Tableau Charactere : ");
    Tc[x] = getch();
    printf("\n\n\t * N.0 valeur : %c\n\t * N.1 valeur : %c\n\t * N.2 valeur : %c", Tc[0], Tc[1], Tc[2]);
    printf("\n\n\t * Autres maniere d'ecrire une chaine de charactere mais non manuellement :  %s", Tc);
    printf("\n\n\t * Derniere case de notre tableau : %d", Tc[3]);
    x = 0;

    //Entre manuelle tableau float
    printf("Tableau de float");
    printf("\n-> Valeur N.0 Tableau float: ");
    scanf("%f", &Tf[x]); getchar();
    x++;
    printf("\n-> Valeur N.1 Tableau float: ");
    scanf("%f", &Tf[x]); getchar();
    x++;
    printf("\n-> Valeur N.2 Tableau float: ");
    scanf("%f", &Tf[x]); getchar();
    x++;
    printf("\n-> Valeur N.3 Tableau float: ");
    scanf("%f", &Tf[x]); getchar();
    x++;
    printf("\n\t * N.0 valeur : %f\n\t * N.1 valeur : %f\n\t * N.2 valeur : %f\n\t * N.3 valeur : %f", Tf[0], Tf[1], Tf[2], Tf[3]);

    getch();

}