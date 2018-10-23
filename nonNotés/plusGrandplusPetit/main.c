#include <stdio.h>
#include <stdlib.h>
/*
BUT Ecrire un programme qui affiiche le plus grand et le plus petit de 3 entiers saisies.
ENTREE Les 3 Nombre
SORTIE Le plus grand et le plus petit

*/
#define NOMBRE 3
int main()
{
   int nMax=(-2147483648),nMin=(2147483647),nNombre=0,nCpt;

    for(nCpt=1;nCpt<=NOMBRE;nCpt++){
        printf("Quelle est le nombre n%i ?\n",nCpt);
        scanf("%i",&nNombre);
        if(nNombre>nMax){
            nMax = nNombre;
        }
        if(nNombre<nMin){
            nMin = nNombre;
        }
    }

    printf("Le plus grand est : %i .\n",nMax);
    printf("Le plus petit est : %i .\n",nMin);

    return 0;
}
