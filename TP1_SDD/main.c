#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"
#include "liste.h"

int main(int argc, char ** argv)
{
    int           m = 0,n = 0;
    float      ** matrice = NULL;
    FILE        * fichier = NULL;
    tete_t      * liste = NULL

    if(argc < 3)
    {
        printf("entrer au moins 3 arguments");
    }
    else
    {
        fichier = fopen(argv[1],"r");
        if(fichier == NULL)
        {
            printf("Erreur de fichier");
        }
        matrice = AllocationMatrice(fichier,&m,&n);
        if(matrice != NULL)
        {
            AfficheMatrice(matrice,m,n);
            InitListe(liste,argc[2]);
            if(liste != NULL)
            {
                
            }
            LibererMatrice(matrice,m);
        }
    }
    
    return 1;
}