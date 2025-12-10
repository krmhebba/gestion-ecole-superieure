#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"etudiants.h"
Etudiant *creerEtudiant(int id,const char *nom,const char *filiere){Etudiant *nouvelEtudiant=(Etudiant*)malloc(sizeof(Etudiant));
if (nouvelEtudiant==NULL) {printf("Erreur d'allocation!\n");
return NULL;}
nouvelEtudiant->id=id;
strcpy(nouvelEtudiant->nom,nom);
strcpy(nouvelEtudiant->filiere,filiere);
nouvelEtudiant->suivant=NULL;
nouvelEtudiant->precedent=NULL;
return nouvelEtudiant;}
void ajouterEtudiant(Etudiant **tete,Etudiant *nouvelEtudiant){if(*tete==NULL){*tete=nouvelEtudiant;}
else{Etudiant *temp=*tete;
while(temp->suivant!=NULL){temp=temp->suivant;}
temp->suivant=nouvelEtudiant;
nouvelEtudiant->precedent=temp;}}
void supprimerEtudiant(Etudiant **tete,int id){Etudiant *temp=*tete;
while(temp!=NULL&&temp->id!=id){temp=temp->suivant;}
if(temp==NULL){printf("Etudiant non trouve.\n");
return;}
if(temp->precedent!=NULL){temp->precedent->suivant=temp->suivant;}
else {*tete=temp->suivant;}
if(temp->suivant!=NULL){temp->suivant->precedent=temp->precedent;}
free(temp);}
Etudiant *rechercherEtudiant(Etudiant *tete,int id){Etudiant *temp=tete;
while(temp!=NULL&&temp->id!=id){temp=temp->suivant;}
return temp;}
void afficherEtudiants(Etudiant *tete){Etudiant *temp=tete;
while(temp!=NULL){printf("ID:%d, nom:%s, filiere:%s.\n",temp->id,temp->nom,temp->filiere);
temp=temp->suivant;}}
void trierEtudiants(Etudiant **tete){if(*tete==NULL){return;}
Etudiant *sorted=NULL;
Etudiant *current=*tete;
while(current!=NULL) {Etudiant *suivant=current->suivant;
if(sorted==NULL||strcmp(sorted->nom, current->nom)>=0){current->suivant=sorted;
if(sorted!=NULL){sorted->precedent=current;}
sorted=current;
sorted->precedent=NULL;}
else{Etudiant *temp=sorted;
while(temp->suivant!=NULL&&strcmp(temp->suivant->nom,current->nom)<0){temp=temp->suivant;}
current->suivant=temp->suivant;
if(temp->suivant!=NULL){temp->suivant->precedent=current;}
temp->suivant=current;
current->precedent=temp;}
current=suivant;}
*tete=sorted;}
