#ifndef FICHIERS_H_INCLUDED
#define FICHIERS_H_INCLUDED
#include"etudiants.h"
#include"profs.h"
#include"laureats.h"
#include"services.h"
void sauvegarderEtudiants(const char *nomFichier,Etudiant *tete);
void chargerEtudiants(const char *nomFichier,Etudiant **tete);
void sauvegarderProfs(const char *nomFichier,Prof *tete);
void chargerProfs(const char *nomFichier,Prof **tete);
void sauvegarderLaureats(const char *nomFichier,Laureat *tete);
void chargerLaureats(const char *nomFichier,Laureat **tete);
void sauvegarderServices(const char *nomFichier,Service *tete);
void chargerServices(const char *nomFichier,Service **tete);
#endif // FICHIERS_H_INCLUDED
