#include <stdio.h>
#include <stdlib.h>
/*
BUT :Ecrire un programme en C qui demande un nombre de d�part et qui affiche les 10 nombres suivants.
ENTREE : L'entier
SORTIE : LEs 10 nombres suivants
*/
int main()
{
    int nNombre=0,nIndex=0;
    printf("Quel est le nombre de depart ?\n");
    scanf("%i",&nNombre);

    for(nIndex=(nNombre+1);nIndex<=(nNombre+10);nIndex++){
        printf("%i ",nIndex);
    }

    return 0;
}
