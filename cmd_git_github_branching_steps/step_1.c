#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[12],prenom[12],sexe[12];
    int age,num;

    printf("Veuillez saisir votre nom :\n");
    scanf("%s", &nom);

    printf("Veuillez saisir votre prenom :\n");
    scanf("%s", &prenom);

    printf("Veuillez saisir votre age :\n");
    scanf("%d", &age);

    printf("Veuillez saisir votre sexe :\n");
    scanf("%s", &sexe);

    printf("Veuillez saisir votre numero de telephone :\n");
    scanf("%d", &num);

    printf("nom : %s prenom : %s age : %d sexe : %s numero de telephone : %d", nom, prenom, age, sexe, num);


    return 0;
}