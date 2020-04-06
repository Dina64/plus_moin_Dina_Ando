#include <stdio.h>
#include <math.h>
#include <time.h>
#include "stdlib.h"
 
int partie_facile ( )
{
    int choix, note;
    int hazar=rand() % 25+1;
    int x;
    note=0;
    printf("Devigne un Nombre compris entre 1 et 25: \n");
    for( x=1; x<=5; x++)
    {
        printf("Devignez: ");
        scanf("%d",&choix);
        if(choix==hazar)
        {
            printf("Bingo !!\n");
            x=6;
            note=note+1;
        }
        else if(choix>hazar)
        {
            printf("Le Nombre est MOINS !\n");
            printf("Il te reste %d tentative\n",5-x);
        }
        else if(choix<hazar)
        {
            printf("Le Nombre est PLUS !\n");
            printf("Il te reste %d tentative\n",5-x);
        }
        if(x==5 && choix!=hazar)
        {
            printf("Perdu ! Le Nombre etait %d ",hazar);
        }
    }
    return note;
}
int partie_moyen ( )
{
    int choix, note;
    int hazar=rand() % 50+1;
    int x;
    note=0;
    printf("Devigne un Nombre compris entre 1 et 50: \n");
    for( x=1; x<=5; x++)
    {
        printf("Devignez: ");
        scanf("%d",&choix);
        if(choix==hazar)
        {
            printf("Bingo !!\n");
            x=6;
            note=note+1;
        }
        else if(choix>hazar)
        {
            printf("Le Nombre est MOINS !\n");
            printf("Il te reste %d tentative\n",5-x);
        }
        else if(choix<hazar)
        {
            printf("Le Nombre est PLUS !\n");
            printf("Il te reste %d tentative\n",5-x);
        }
        if(x==5 && choix!=hazar)
        {
            printf("Perdu ! Le Nombre etait %d ",hazar);
        }
    }
    return note;
}
int partie_difficile ( )
{
    int choix, note;
    int hazar=rand() % 100+1;
    int x;
    note=0;
    printf("Devigne un Nombre compris entre 1 et 100: \n");
    for( x=1; x<=5; x++)
    {
        printf("Devignez: ");
        scanf("%d",&choix);
        if(choix==hazar)
        {
            printf("Bingo !!\n");
            x=6;
            note=note+1;
        }
        else if(choix>hazar)
        {
            printf("Le Nombre est MOINS !\n");
            printf("Il te reste %d tentative\n",5-x);
        }
        else if(choix<hazar)
        {
            printf("Le Nombre est PLUS !\n");
            printf("Il te reste %d tentative\n",5-x);
        }
        if(x==5 && choix!=hazar)
        {
            printf("Perdu ! Le Nombre etait %d ",hazar);
        }
    }
    return note;
}
 
int main()
{
    int note,y;
    int partie;
    srand ( time(NULL) );
    note=0;
    printf("Choisir mode du jeux: \n");
    printf("1- Mode Facile (1 - 25)\n");
    printf("2- Mode Moyen (1 - 50)\n");
    printf("3- Mode Difficile (1 - 100)\n");
    scanf("%d",&partie);
    int nbr_joueur;
    printf("Entrer nombre de joueur: \n");
    scanf("%d",&nbr_joueur);
    printf("Chaque joueur aurront 10 tentative .. Bon chance!! \n");
    for(y=1; y<=nbr_joueur; y++)
    {
        switch(partie)
        {
            case 1 :
                for (int i = 1; i <= 10; ++i)
                {
                    note=0;
                    note+=partie_facile();
                    printf("  Ta Note pour l' instant est de %d / %d\n",note,i);
                }
                printf(">>>La note total du joueur est %d\n",note);
                break;
            case 2 :
                for (int i = 0; i < 10; ++i)
                {
                    note=0;
                    note+=partie_moyen();
                    printf("  Ta Note pour l' instant est de %d / %d\n",note,y);
                }
                printf(">>>La note total du joueur est %d\n",note);
                break;
            case 3 :
                for (int i = 0; i < 10; ++i)
                {
                    note=0;
                    note+=partie_difficile();
                    printf("  Ta Note pour l' instant est de %d / %d\n",note,y);
                }
                printf(">>>La note total du joueur est %d\n",note);
                break;
            default :
                printf("Ce choix n'est pas valable\n");
        }
    }
}