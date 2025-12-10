#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fichiers.h"
void sauvegarderEtudiants(const char *nomFichier,Etudiant *tete){FILE *fichier = fopen(nomFichier,"w");
if(!fichier){perror("Erreur d'ouverture du fichier pour sauvegarde!");
return;}
Etudiant *courant=tete;
while(courant){fprintf(fichier,"%d;%s;%d\n",courant->id,courant->nom,courant->age);
courant=courant->suivant;}
fclose(fichier);}
void chargerEtudiants(const char *nomFichier,Etudiant **tete){
FILE *fichier=fopen(nomFichier,"r");if(!fichier){perror("Erreur d'ouverture du fichier pour chargement!");
return;}
char ligne[256];
while(fgets(ligne,sizeof(ligne),fichier)){int id,age;
char nom[50];
sscanf(ligne,"%d;%49[^;];%d",&id,nom,&age);
Etudiant *nouveau=creerEtudiant(id,nom,age);
ajouterEtudiant(tete,nouveau);}
fclose(fichier);}
void sauvegarderProfs(const char *nomFichier,Professeur *tete) {FILE *fichier=fopen(nomFichier,"w");
if(!fichier){perror("Erreur d'ouverture du fichier pour sauvegarde!");
return;}
Professeur *courant=tete;
while(courant){fprintf(fichier,"%d;%s;%s\n",courant->id,courant->nom,courant->matiere);
courant=courant->suivant;}
fclose(fichier);}
void chargerProfs(const char *nomFichier,Professeur **tete){FILE *fichier=fopen(nomFichier,"r");
if(!fichier){perror("Erreur d'ouverture du fichier pour chargement!");
return;}
char ligne[256];
while(fgets(ligne,sizeof(ligne),fichier)){int id;
char nom[50],matiere[50];
sscanf(ligne,"%d;%49[^;];%49[^\n]",&id,nom,matiere);
Professeur *nouveau=creerProfesseur(id, nom, matiere);
ajouterProfesseur(tete, nouveau);}
fclose(fichier);}
//les fonctions pour les laur ats et services sont similaires
