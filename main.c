#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


// debut de la fonction main

int main()
{

    // declaration de nos variables 
    int tentative = 10;
    int entrer_utilisateur = 0;  
    int nombre_mystere = 0;   
    const int VALEUR_MIN = 1, VALEUR_MAX = 100;

    // generation d'un nombre aleatoire   
    srand(time(NULL));
    nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;

    do
    {
    printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);
    scanf ("%d", &entrer_utilisateur);

        if(entrer_utilisateur > nombre_mystere)
        {
            printf("c'est moin \n");
        }
        else if (entrer_utilisateur < nombre_mystere)
        {
            printf("c'est plus\n");
        }
        else
        {
            printf("BRAVO c'est bon\n");
            break;
        }

        printf("il te reste %d \n", --tentative);


    } while ( (entrer_utilisateur != nombre_mystere) || (tentative >= 0) );
    

    return 0;
}
