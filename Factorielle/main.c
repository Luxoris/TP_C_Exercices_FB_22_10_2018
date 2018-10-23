#include <stdio.h>
#include <stdlib.h>

/*
BUT Ecrire un programme en C qui demande un nombre de départ et qui calcul sa factorielle.
ENTREE Le nombre à factorisé
SORTIE Le resultat

*/

int main()
{
    int nNombre=0,nIndex=0,nCalcul=1;
    printf("Entrez un nombre!\n");
    scanf("%i",&nNombre);

    for(nIndex=1;nIndex<=nNombre;nIndex++){
        nCalcul*=nIndex;
    }
    printf("Le resultat est : %i",nCalcul);

    return 0;
}
