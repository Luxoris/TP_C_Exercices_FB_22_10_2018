#include <stdio.h>
#include <stdlib.h>
/*
BUT Ecrire un programme qui affiche le code decimal et hexadecimal d'un caract�re saisie par l'utilisateur.
ENTREE Le caracter
SORTIE Le code d�cimal et hexad�cimale

*/
int main()
{
    char cCar='a';
    printf("Quelle est le caractere dont vous souhaitez connaitre les codes ?\n");
    scanf("%c",&cCar);
    printf("Le code decimal: %d \n",cCar);
    printf("Le code Hexad�cimal: %x \n",cCar);

    return 0;
}
