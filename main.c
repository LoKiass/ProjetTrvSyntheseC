//PrjTrv 5.1 : Gestion avancé d'un tableau de charactère
// Gestion des touches spéciale comme les touche fonction, flèches et etc.
#include <stdio.h>
#include <conio.h>

int main(void) {
    char Tchar[1];
    int x = 0;
    Tchar[x] = getch();
    switch (Tchar[x]) {
        case 13: // Code ASCII de la touche "Enter"
            printf("Vous avez appuyer sur la touche Enter");
        break;
        case 8: // Code ASCII de la touche "Backspace"
            printf("Vous avez appuyer sur la touche backspace");
        break;
        case 27: // Code ASCII de la touche "Espace"
            printf("Vous avez appuyer sur la touche ");
        break;
        case 9:// Code ASCII de la touche "Tab"
            printf("Vous avez appuyer sur la touche Tab");
        break;
        case 0: // Première parti du code Ascii d'une touche fonction
            case -32: // Deuxième partir du code Ascii de la touche fonction
            printf("Vous avez appuyer sur la touche FX");
        getch(); // On suprimme le code dans le Buffer (2ème parti du code ASCII des touches fonctions
        break;
        case 32: // Code Ascii de la touche espace
            printf("Vous avez appuyer sur la touche Espace");
        break;
        default:
            if (Tchar[x] >= 48 && Tchar[x] <= 57) { // Code Ascii 0-9
                printf("Vous avez appuyer sur une touche Alpha-numérique");
            }
            else if (Tchar[x] >= 65 && Tchar[x] <= 90) { // Code Ascii A-Z
                printf("Vous avez appuez sur une touche Majuscules");
            }
            else if (Tchar[x] >= 97 && Tchar[x] <= 122) { // Code Ascii a-z
                printf("Vous avez appuer sur une touche Minuscule");
            }
            else { // Autre touche
                printf("Touche non-gere par le programme");
            }
    }
    getch();

}