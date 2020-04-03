#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MIN 1
 
char plus_moin()
{
    int valeur_a_trouver,choix_joueur = 0;
    valeur_a_trouver = (rand() % (MAX - MIN + 1)) + MIN;
    char result;
 
    printf("Entrer un nombre: \n");
    for (int i=0;i<5;i++)
    {
        scanf("%d", &choix_joueur);
 
        if (choix_joueur == valeur_a_trouver)
            result=="Bingo";
 
        else {
            if (choix_joueur > valeur_a_trouver)
            result=="Moins";
         
            else result=="Plus";
             } 
    }
    return result;
}

int main()
{
    int choix=0;
    printf("Ceci est un jeux de devinette,choisi un chiffre entre 1 et 100\n");
    scanf("%lf",choix);
    printf(plus_moin(choix));
}