#ifndef LAUREATS_H_INCLUDED
#define LAUREATS_H_INCLUDED
typedef struct Laureat {int id;
char nom[50];
int anneeDiplome;
struct Laureat *suivant;}Laureat;
Laureat *creerLaureat(int id,const char *nom,int anneeDiplome);
void ajouterLaureat(Laureat **tete,Laureat *nouveau);
void supprimerLaureat(Laureat **tete,int id);
Laureat *rechercherLaureat(Laureat *tete,int id);
void afficherLaureats(Laureat *tete);
void trierLaureats(Laureat **tete);
#endif // LAUREATS_H_INCLUDED
