#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    
    srand(time(NULL));
    int score = 0;
    int tentatives = 0;
    int max_tentatives = 3;
    while (score <10 && tentatives< max_tentatives)
    {
    int nombre1 = rand()%5;
    int nombre2 = rand()%5;
    int nombre3 = rand()%5;

    printf("Nombre 1: %d\n", nombre1);
    printf("Nombre 2: %d\n", nombre2);
    printf("Nombre 3: %d\n", nombre3);

    if (nombre1 == nombre2 && nombre2 == nombre3)
    {
        printf("vous aveez gagner\n");
        break;
    }
    else if (nombre1 == nombre2 ||nombre1 == nombre3)
    {
        score ++;
    }
    else if (nombre2== nombre3|| nombre2 == nombre1)
    {
        score ++;
    }
    else if (nombre3 == nombre1 || nombre3 == nombre2)
    {
        score++;
    }
    printf("score= %d \n", score);
    tentatives++;
    }
    
    return 0;
}
