#include <stdio.h>
#include <stdlib.h>

/*
ALGORITHME: carre
//BUT: dessiner un carre � l'�cran
//ENTREE : demander � l'utilisateur le caractere du carre, de l'interieur et sa taille
//SORTIE : le carre

*/
int main()
{
    //d�claration des variables
    int nTaille=0,nI=1,nJ=1;
    char cSymbole='&',cSymboleInt='*';

    //rensignement des valeurs
    printf("Quel est le symbole exterieur a afficher ?\n");
    scanf("%c",&cSymbole);

    printf("Quel est le symbole interieur a afficher ?\n");
    scanf(" %c",&cSymboleInt);  //" %c" avec un espace pour sp�cifier qu'on ignore le dernier caract�re dans la pile.

    printf("Quelle est la taille de la croix ?\n");
    scanf("%i",&nTaille);

    //traitement et affichage
    for(nI=1;nI<=nTaille;nI++){
        for(nJ=1;nJ<=nTaille;nJ++){
            if(((nI==1)||(nI==nTaille))||((nJ==nTaille)||(nJ==1))){
                printf("%c",cSymbole);
            }else{
                printf("%c",cSymboleInt);}

        }
        printf("\n");
    }
    return 0;
}
