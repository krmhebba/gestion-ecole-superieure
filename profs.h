#ifndef PROFS_H_INCLUDED
#define PROFS_H_INCLUDED
typedef struct Prof{int id;
char nom[50];
char departement[50];
struct Prof *suivant;}Prof;
Prof *creerProf(int id,const char *nom,const char *departement);
void ajouterProf(Prof **tete,Prof *nouveau);
void supprimerProf(Prof **tete,int id);
Prof *rechercherProf(Prof *tete,int id);
void afficherProfs(Prof *tete);
void trierProfs(Prof **tete);
#endif // PROFS_H_INCLUDED
