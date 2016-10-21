#include <stdio.h>
#include <stdlib.h>

/*
    Algorithme_Carre
    BUT: dessiner un carré dont les bordures sont différentes de l'intérieur
    ENTREE: une longueur et une largeur, saisies par l'utilisateur
    SORTIE: un carré aux dimensions souhaitées

    CONST: cara1='@'
           cara2:'#'

    VAR: l,h,i,j:ENTIER

    DEBUT
        ECRIRE "Quelle sera la longueur de votre carré ?"
        LIRE l
        ECRIRE "Quelle sera la hauteur de votre carré ?"
        LIRE h
        POUR i de 1 à h FAIRE
            SI (i=1) OU (i=h) ALORS
                POUR j de 1 à l FAIRE
                    ECRIRE cara1
                FINPOUR
            SINON
                ECRIRE cara1
                POUR j de 1 à l-2 FAIRE
                    ECRIRE cara2
                FINPOUR
                ECRIRE cara1
            FINSI
            NOUVELLELIGNE
        FINPOUR
    FIN
*/

//déclaration des constantes : les caractères qui remplieront le carré
#define cara1 '@'
#define cara2 '#'

int main()
{
    //BUT: dessiner un carré dont les bordures sont différentes de l'intérieur
    //ENTREE: une longueur et une largeur, saisies par l'utilisateur
    //SORTIE: un carré aux dimensions souhaitées

    //déclaration des variables : longueur et hauteur du carré, mais aussi les variables nécessaires aux deux For utilisés
    long l=0;
    long h=0;
    int i=0;
    int j=0;

    printf("Quelle sera la longueur de votre carré ?\n");
    scanf("%d",&l);
    printf("Quelle sera la hauteur de votre carré ?\n");
    scanf("%d",&h);

    for(i=0;i<h;i++){                               //à chaque ligne

        if(i==0||i==h-1){                           //première et dernière ligne du carré
            for(j=0;j<l;j++){
                printf("%c",cara1);
            }
            }
        else{                                       //toutes les autres lignes
            printf("%c",cara1);
            for(j=0;j<l-2;j++){
                printf("%c",cara2);
            }
            printf("%c",cara1);
            }

        printf("\n");                               //commence à écrire une nouvelle ligne du tableau

        }

    return 0;                                       //pour que le programme ne se ferme pas immédiatement
}
