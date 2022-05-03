typedef struct cellule cellule_t;
struct cellule
{
    int cout;
    struct cellule *suivant;
};

typedef struct tete tete_t;
struct tete
{
    struct cellule *suivant;
};

void InitListe(tete_t *tete, int taille);
void ADJ_CEL(cellule_t *prec, cellule_t *elt);