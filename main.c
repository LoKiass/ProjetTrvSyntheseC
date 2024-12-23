// PRJTRV 3
// Type d'aquisitions de frappe en langage C
// Le buffer est une zone mémoire temporaire qui permet de pouvoir anoté plusieurs charactère à la fois
// Le code ascii de chaque frappe du buffer peuvent être récupérable

#include <stdio.h>
#include <conio.h>
int main(void) {
    char c;
    printf("\n--> Introduction non-bufferise de la frappe - Getch");
    c = getch();
    printf("\n\t * Frappe introduite : %c\n\t * Valeur de la frappe : %d", c, c);

    printf("\n--> Introduction non-bufferise de la frappe - Getche (Avec echo)");
    c = getche();
    printf("\n\t * Frappe introduite : %c\n\t * Valeur de la frappe : %d", c, c);

    printf("\n--> Introduction bufferise de la frappe - Getchar");
    c = getchar();
    printf("\n\t * Frappe introduite : %c\n\t * Valeur de la frappe : %d", c, c);

    printf("\n--> Introduction bufferise de la frappe - Scanf");
    scanf("%c", &c); getch();
    printf("\n\t * Frappe introduite : %c\n\t * Valeur de la frappe : %d", c, c);

    getch();

    return 0;
}