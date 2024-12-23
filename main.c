//PrjTrv 6 : Boucles
// Gerer les 3 types de boucles pour rentré de simple valeur dans un tableau
#include <stdio.h>
#include <conio.h>

int main(void) {
    int TailleTab = 10, x = 0;
    int Tx[TailleTab];

     // Type de boucle 1 : While
     // Aquisitions des valeurs
     printf("Aquisitions de valeur boucle WHILE\n");
     while(x /*0-1-2-3-4-5-6-7-8-9-10*/ != TailleTab /*10*/ ) {
         printf("\t * Chiffre N.%d : ", x);
         scanf("%d",&Tx[x]); getchar();
         x++;
     }
     x = 0;
     printf("Chiffres que nous avons obtenue : ");
     while(x != TailleTab) {
         printf("\n\t * Chifres n.%d : %d",x , Tx[x]);
         x++;
     }

     x = 0;
     // Type de boucles 2 : DO WHILE
     //Aquistions des valeurs
     printf("\nAquisitions des valeurs boucle DO... WHILE\n");
     do {
         printf("\t * Chiffre N.%d : ", x);
         scanf("%d",&Tx[x]); getchar();
         x++;
     }while (x != TailleTab);
     x = 0;
     do {
         printf("\n\t * Chifres n.%d : %d",x , Tx[x]);
         x++;
     }while (x != TailleTab);

    // Type de boucle 3 : FOR
    // Aquisitions des valeurs
    printf("\nAquisitions des valeurs boucle FOR\n");
    for (x = 0; x != TailleTab; x++) {
        printf("\t * Chiffre N.%d : ", x);
        scanf("%d",&Tx[x]); getchar();
    }
    for (x = 0; x != TailleTab; x++) {
        printf("\n\t * Chifres n.%d : %d",x , Tx[x]);
    }
    getch();
}