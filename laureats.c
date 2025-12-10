#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"laureats.h"
Laureat *creerLaureat(int id,const char *nom,int anneeDiplome){Laureat *nouveau=(Laureat *)malloc(sizeof(Laureat));
if(nouveau){nouveau->id=id;
strncpy(nouveau->nom,nom,sizeof(nouveau->nom)-1);
nouveau->nom[sizeof(nouveau->nom)-1]='\0';
nouveau->anneeDiplome=anneeDiplome;
nouveau->suivant=NULL;}
return nouveau;}
void ajouterLaureat(Laureat **tete,Laureat *nouveau){if(!nouveau){return;}
nouveau->suivant=*tete;
*tete=nouveau;}
void supprimerLaureat(Laureat **tete,int id){Laureat *courant=*tete,*precedent=NULL;
while(courant&&courant->id!=id){precedent=courant;
courant=courant->suivant;}
if(!courant){return;}
if(precedent){precedent->suivant=courant->suivant;}
else{*tete=courant->suivant;}
free(courant);}
Laureat *rechercherLaureat(Laureat *tete,int id){while(tete){if(tete->id==id){return tete;}
tete=tete->suivant;}
return NULL;}
void afficherLaureats(Laureat *tete){while(tete){
printf("ID:%d, nom:%s, annee de diplome:%d.\n",tete->id,tete->nom,tete->anneeDiplome);
tete=tete->suivant;}}
void trierLaureats(Laureat **tete){if(!*tete||!(*tete)->suivant){return;}
Laureat *i,*j;
for(i=*tete;i->suivant;i=i->suivant){
for(j=i->suivant;j;j=j->suivant){if(i->anneeDiplome>j->anneeDiplome){Laureat temp=*i;
*i=*j;
*j=temp;}}}}
