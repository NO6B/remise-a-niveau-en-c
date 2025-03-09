#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int nombre1;
    int nombre2;
    int somme;
    char choix;
    printf("entre la premiere valeur: ");
    scanf("%d", &nombre1);

    printf("entrez la deuxieme valeur: ");
    scanf("%d", &nombre2);
    printf("choisi quelle operation veux tu faire :");
    scanf(" %c", &choix);
    if (choix == '+')
    {
       somme = nombre1 + nombre2; 
    }
    else if (choix == '-')
    {
        somme = nombre1 - nombre2;
    }
    else if (choix== '*')
    {
        somme= nombre1 * nombre2;
    }
    else if (choix == '/' )
    {
        somme= nombre1 / nombre2;
    }
    
    printf("la somme des deux resultat est %d \n", somme);
    return 0;
}
