#include <stdio.h>
#include <stdlib.h>
/*
BUT Ecrire un programme qui détermine si un entier saisie est pair ou impaire.
ENTREE Le nombre
SORTIE Le résultat

*/
int main()
{
   int nNombre=0;
    printf("Quelle est le nombre ?\n");
    scanf("%i",&nNombre);

    nNombre=nNombre%2;
    if(nNombre==0){
        printf("Le nombre est pair ?\n");
    }else{
        printf("Le nombre est impair ?\n");
    }

    return 0;
}
