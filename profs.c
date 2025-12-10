#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"profs.h"
Prof *creerProf(int id,const char *nom,const char *departement){Prof *nouveau=(Prof*)malloc(sizeof(Prof));
if(nouveau){nouveau->id=id;
strncpy(nouveau->nom,nom,sizeof(nouveau->nom)-1);
nouveau->nom[sizeof(nouveau->nom)-1]='\0';
strncpy(nouveau->departement,departement,sizeof(nouveau->departement)-1);
nouveau->departement[sizeof(nouveau->departement)-1]='\0';
nouveau->suivant=NULL;}
return nouveau;}
void ajouterProf(Prof **tete,Prof *nouveau){if(!nouveau){return;}
nouveau->suivant=*tete;
*tete=nouveau;}
void supprimerProf(Prof **tete, int id){Prof *courant=*tete,*precedent=NULL;
while(courant&&courant->id!=id){precedent=courant;
courant=courant->suivant;}
if(!courant){return;}
if(precedent){precedent->suivant=courant->suivant;}
else{*tete=courant->suivant;}
free(courant);}
Prof *rechercherProf(Prof *tete,int id){while(tete){if(tete->id==id){return tete;}
tete=tete->suivant;}
return NULL;}
void afficherProfs(Prof *tete) {while (tete) {printf("ID:%d, nom:%s, departement:%s.\n",tete->id,tete->nom,tete->departement);
tete=tete->suivant;}}
void trierProfs(Prof **tete){if(!*tete||!(*tete)->suivant) return;
Prof *i, *j;
for(i=*tete;i->suivant;i=i->suivant){for(j=i->suivant;j;j=j->suivant){if(strcmp(i->nom,j->nom)>0){Prof temp=*i;
*i=*j;
*j=temp;}}}}
