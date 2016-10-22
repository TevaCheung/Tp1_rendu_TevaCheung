#include <stdio.h>
#include <stdlib.h>

/*MES 2 ERREURS PAR RAPPORT A MON PREMIER ENVOI :
    -avoir ecrit = au lieu de == pour le test de comparaison logique
    -ne pas avoir pris en compte la LIGNE EN COURS
*/

int main()
{
    int i=0;
    int j=0;
    int longueur;
    int largeur;
    char ligne[100];

    printf("Vous allez afficher un carre avec des cotes faits d etoiles et une aire de plus\n");

    printf("Entrez une longueur : ");
    scanf("%i",&longueur);
    fflush(stdin);

    printf("\nEntrez une largeur : ");
    scanf("%i",&largeur);
    fflush(stdin);

    for(j=0;j<largeur;j++){ //LIGNE PAR LIGNE ...
        for(i=0;i<longueur;i++){
            if ((j==0) || (j==largeur-1)) { // S'IL S AGIT DE LA PREMIERE OU DERNIERE LIGNE, IL N Y AURA QUE DES ETOILES
                ligne[i]='*';
            }else{ //S IL S AGIT D UNE AUTRE LIGNE
                if ((i==0) || (i==longueur-1)){ //S IL S AGIT DE LA PREMIERE OU DERNIERE COLONNE
                    ligne[i]='*';
                }else{                      //SI C EST UNE AUTRE COLONNE
                    ligne[i]='+';
                }
            }

            printf("%c",ligne[i]);
        }

        printf("\n");
    }

    return 0;
}
