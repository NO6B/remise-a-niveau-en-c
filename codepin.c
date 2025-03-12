    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>
    
    
    int main(int argc, char const *argv[]) {
        int tentative=0;
        int pin;
        printf("entrez un code pin de 4 chiffre :");
        scanf("%d",&pin );

while (tentative <= 9999)
{
    if (tentative== pin )
    {
        printf("le code pin est %d\n", tentative);
        break;
    }
    tentative++;
    
}

        
        return 0;
    }



























