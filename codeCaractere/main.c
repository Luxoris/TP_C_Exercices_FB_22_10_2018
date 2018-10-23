#include <stdio.h>
#include <stdlib.h>
/*
BUT Ecrire un programme qui affiche le code decimal et hexadecimal d'un caractère saisie par l'utilisateur.
ENTREE Le caracter
SORTIE Le code décimal et hexadécimale

*/
int main()
{
    char cCar='a';
    printf("Quelle est le caractere dont vous souhaitez connaitre les codes ?\n");
    scanf("%c",&cCar);
    printf("Le code decimal: %d \n",cCar);
    printf("Le code Hexadécimal: %x \n",cCar);

    return 0;
}
