#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nbr,somme = 0,cpt = 0;
    float moyen;

    do{
        printf("Veuillez saisir un nombre :");
        scanf("%d", &nbr);

        if(nbr > -1){
            somme += nbr;
            cpt++;
        }
    }while(nbr > -1)
    moyen = (float)somme / cpt;

    printf("le moyen est : %.2f" , moyen);

    return 0;
}