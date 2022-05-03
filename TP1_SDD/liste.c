#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void InitListe(tete_t *tete, int taille)
{
    cellule_t * courant = tete->suivant;
    for(int i=0; i<taille; i++)
    {
        courant = (cellule_t*)malloc(sizeof(cellule_t));
        courant = courant->suivant;
    }
}

void ADJ_CEL(cellule_t *prec, cellule_t *elt)
{
    elt->suivant = prec->suivant;
    prec->suivant = elt;
}

void RemplirListe(tete_t *tete,)