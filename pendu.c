#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char lettre;
    char ajout[5]= "";
    char mot[] = "chat";
    int vie = 5;

    printf("Bienvenue au jeu du pendu ! Tapez une lettre : ");
    
    while (vie > 0) {  
        scanf(" %c", &lettre);  
        
        if (lettre == mot[0]) {
            printf("Vous avez trouvé la première lettre !\n");
            ajout[0]= 'c';
        }
        else if (lettre == mot[1]) {
            printf("Vous avez trouvé la deuxième lettre !\n");
            ajout[1]='h';
        }
        else if (lettre == mot[2]) {
            printf("Vous avez trouvé la troisième lettre !\n");
            ajout[2]='a';
        }
        else if (lettre == mot[3]) {
            printf("Vous avez trouvé la quatrième lettre !\n");
            ajout[3]='t';
        }

        else {
            vie--;
            printf("Dommage, il ne vous reste plus que %d vie(s) !\n", vie);
        }
        if (strcmp(ajout, mot) == 0) {
            printf("Félicitations, vous avez trouvé le mot '%s' !\n", ajout);
            break;
        }
        
        if (vie == 0) {
            printf("Vous avez perdu toutes vos vies !\n");
        }
        
    }
    return 0;
}

