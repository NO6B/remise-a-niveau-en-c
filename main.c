#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int nombre1;
    int nombre2;
    int somme;
    printf("entre la premiere valeur: ");
    scanf("%d", &nombre1);

    printf("entrez la deuxieme valeur: ");
    scanf("%d",&nombre2);

    somme=nombre1+nombre2;
    printf("la somme des deux resultat est %d", somme);
    return 0;
}
