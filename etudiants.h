#ifndef ETUDIANTS_H_INCLUDED
#define ETUDIANTS_H_INCLUDED
typedef struct Etudiant{int id;
char nom[50];
char filiere[50];
struct Etudiant *suivant;
struct Etudiant *precedent;}Etudiant;
Etudiant *creerEtudiant(int id,const char *nom,const char *filiere);
void ajouterEtudiant(Etudiant **tete,Etudiant *nouvelEtudiant);
void supprimerEtudiant(Etudiant **tete,int id);
Etudiant *rechercherEtudiant(Etudiant *tete,int id);
void afficherEtudiants(Etudiant *tete);
void trierEtudiants(Etudiant **tete);
#endif // ETUDIANTS_H_INCLUDED
