#include <stdio.h>
#include <stdlib.h>
/*
BUT Ecrire un programme en C qui détermine la ènième valeur 'un', 'n' fournit par l'utilisateur de la suite de fibonacci
ENTREE Le numero de la Nieme valeur rechercher
SORTIE La la Nieme valeur

*/
int main()
{
    int nPremierNombre=0,nSecondNombre=1,nMem=0,nNiemeValeur=0,nCpt=0;
    printf("Entrez la nieme valeur : ");
    scanf("%i",&nNiemeValeur);

    if(nNiemeValeur==0){
        printf("Le resultat est : %i",nPremierNombre);
    }else if(nNiemeValeur==1){
        printf("Le resultat est : %i",nSecondNombre);
    }else{
        for(nCpt=2;nCpt<=nNiemeValeur;nCpt++){
            nMem=nPremierNombre+nSecondNombre;      //calcul de la valeur
            nPremierNombre=nSecondNombre;           //sauvegarde de la valeur précédente dans nombre premier
            nSecondNombre=nMem;                     //enregistrement du resultat dans nombre second
        }
         printf("Le resultat est : %i",nSecondNombre);
    }


    return 0;
}
