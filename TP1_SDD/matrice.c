#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"

float ** AllocationMatrice(FILE *fichier,int *m,int *n)
{
    int         i=0,OK = 1;
    float    ** matrice = NULL;
    fscanf(fichier,"%d %d",m,n);

    matrice = (float**)malloc(sizeof(float*)*(*m));
    if(matrice == NULL)
    {
        OK = 0;
    }
    else
    {
        while((i<(*m)) && (OK))
        {
            matrice[i] = (float*)malloc(sizeof(float)*(*n));
            if(matrice[i] == NULL)
            {
                OK = 0;
                for(int j=0; j<i-1; j++)
                {
                    free(matrice[j]);
                }
                free(matrice);
            }
            i++;
            
        }
    }

    if(OK)
    {
        for(i=0; i<(*m); i++)
        {
            for(int j=0; j<(*n); j++)
            {
                fscanf(fichier,"%f",&matrice[i][j]);
            }
        }
    }

    return matrice;
}

void AfficheMatrice(float **matrice,int m,int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%f ",matrice[i][j]);
        }
        printf("\n");
    }
}

void LibererMatrice(float **matrice, int m)
{
    for(int i=0; i<m; i++)
    {
        free(matrice[i]);
    }
    free(matrice);
}