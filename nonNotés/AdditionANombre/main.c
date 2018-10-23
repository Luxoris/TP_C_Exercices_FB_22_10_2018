#include <stdio.h>
#include <stdlib.h>
/*
BUT Ecrire un programme en C qui demande un nombre de départ et qui calcul la somme des entiers jusqu'à ce nombre.
ENTREE Le nombre à calculer
SORTIE Le resultat

*/
int main()
{
    int nNombre=0,nIndex=0,nAddition=0;
    printf("Entrez un nombre!\n");
    scanf("%i",&nNombre);

    for(nIndex=1;nIndex<=nNombre;nIndex++){
        nAddition+=nIndex;
    }
    printf("Le resultat est : %i",nAddition);


    return 0;
}
