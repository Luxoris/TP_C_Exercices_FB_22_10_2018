#include <stdio.h>
#include <stdlib.h>

/*
//BUT: dessiner une croix à l'écran
//ENTREE : demander à l'utilisateur le caractere de la croix et la taille de la croix
//SORTIE : la croix

*/
int main()
{
    //déclaration des variables
    int nTaille=0,nI=1,nJ=1;
    char cSymbole='&';

    //rensignement des valeurs
    printf("Quel est le symbole a afficher ?\n");
    scanf("%c",&cSymbole);

    printf("Quelle est la taille de la crois ?\n");
    scanf("%i",&nTaille);

    //traitement et affichage
    for(nI=1;nI<=nTaille;nI++){
        for(nJ=1;nJ<=nTaille;nJ++){
            if((nI==nJ)||(nI==(nTaille+1-nJ))){
                printf("%c",cSymbole);
            }else{
                printf(" ");}

        }
        printf("\n");
    }
    return 0;
}
