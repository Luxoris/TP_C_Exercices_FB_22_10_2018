#include <stdio.h>
#include <stdlib.h>
/*
BUT Ecrire un programme qui affiiche le plus grand et le plus petit de nombres entiers saisie. Le programme se termine si on tape 0.
ENTREE Les 3 Nombre
SORTIE Le plus grand et le plus petit

*/
#define NOMBRE 3
int main()
{
   int nMax=(-2147483648),nMin=(2147483647),nNombre=-2147483648,nCpt=1;


    while(nNombre!=0){
        printf("Quelle est le nombre n%i ? Taper 0 pour arreter.\n",nCpt);
        scanf("%i",&nNombre);
        if(nNombre>nMax){
            nMax = nNombre;
        }
        if(nNombre<nMin){
            nMin = nNombre;
        }
        nCpt++;
    }

    printf("Le plus grand est : %i .\n",nMax);
    printf("Le plus petit est : %i .\n",nMin);

    return 0;
}
