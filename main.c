//PRJTRV4 : Pointeur
// Les pointeur peuvent pointer l'adresse d'une variable afin de la recuprer ou d'introduire des données dedans
// px : Adresse que px pointe (Variable X dans ce cas si)
// *px: Contenue de l'adresse point" par px
// &px: Adresse du pointeur PX
#include <stdio.h>
#include <conio.h>
int main(void) {
    int *px = 0, x = 0;
    char *pc, c; //
    printf("Avant aquistions d'une valeurs");
    printf("--> Adresse de la variable X : %04X\n--> Valeur de X avant aquisitions : %d",&x, x);
    printf("\n--> Adresse du pointeur PX : %04X\n--> Adresse pointe par px  : %d",&px, px);

    px = &x;
    printf("\n\nApres mise en place du pointeur PX : ");
    printf("\n--> Adresse de la variable X : %04X\n--> Valeur de X avant aquisitions : %d",&x, x);
    printf("\n--> Adresse du pointeur PX : %04X\n--> Valeur du contenue du pointeur PX : %d\n--> Adresse pointe par PX : %04X",&px, *px, px);


    *px = 100;
    printf("\n\nApres avoir donne la valeur du contenue de px : ");
    printf("\n--> Adresse de la variable X : %04X\n--> Valeur de X avant aquisitions : %d",&x, x);
    printf("\n--> Adresse du pointeur PX : %04X\n--> Valeur du contenue du pointeur PX : %d\n--> Adresse pointe par PX : %04X",&px, *px, px);

    x = 200;
    printf("\n\nApres avoir donne une valeur a X: ");
    printf("\n--> Adresse de la variable X : %04X\n--> Valeur de X avant aquisitions : %d",&x, x);
    printf("\n--> Adresse du pointeur PX : %04X\n--> Valeur du contenue du pointeur PX : %d\n--> Adresse pointe par PX : %04X",&px, *px, px);
    getch();

    return 0;
}