#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char joueur;
    char alphabet [] ="abcdefghijklmnopqrstuvwxyz";
    int checker=0;
    scanf("%c", &joueur);

    for (int i = 0; i < strlen(alphabet); i++)
    {
        if (joueur == alphabet[i])
        {
            checker=1;
        }

    }
    if (checker==1)
    {
        printf("dans la liste \n");
    }
    else{
        printf("pas dans la liste \n");
    }

    
        
    

    return 0;
}
