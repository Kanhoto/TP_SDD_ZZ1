/*-------------------------------------------------------------------------------------------*/
/* AllocationMatrice       alloue une matrice                                                */
/*                                                                                           */
/* en entrée :  fichier: pointeur de fichier                                                 */
/*              m,n: pointeur d'entier correspondant au nombre de lignes et de colonnes      */
/*                                                                                           */
/* en sortie :  adresse de la matrice remplie                                                */
/*-------------------------------------------------------------------------------------------*/
float ** AllocationMatrice(FILE *fichier,int *m,int *n);

/*-------------------------------------------------------------------------------------------*/
/* AfficheMatrice       affiche le contenu d'une matrice                                     */
/*                                                                                           */
/* en entrée :  matrice: double pointeur float                                               */
/*              m,n: entier correspondant au nombre de lignes et de colonnes                 */
/*-------------------------------------------------------------------------------------------*/
void AfficheMatrice(float **matrice,int m,int n);

/*-------------------------------------------------------------------------------------------*/
/* LibererMatrice       libère une matrice                                                   */
/*                                                                                           */
/* en entrée :  matrice: double pointeur float                                               */
/*              m: entier correspondant au nombre de lignes                                  */
/*-------------------------------------------------------------------------------------------*/
void LibererMatrice(float **matrice, int m);