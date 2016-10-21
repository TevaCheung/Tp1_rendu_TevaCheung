#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=0;
    int j=0;
    int longueur;
    int largeur;
    char ligne[100];

    printf("Vous allez afficher un carre avec des cotes faits d etoiles et une aire de plus\n");

    printf("Entrez une longueur : ");
    scanf("%d",&longueur);

    printf("\nEntrez une largeur : ");
    scanf("%d",&largeur);

    fflush(stdin);

    for(j=0;j<largeur;j++){
        for(i=0;i<longueur;i++){
            if(i=0){
                ligne[i]='*';
            }else{
                ligne[i]='+';
            }
        }

        for (i=0;i<longueur;i++){
            printf("%c",ligne[i]);
        }
        printf("\n");
    }

    return 0;
}
