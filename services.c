#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"services.h"
Service *creerService(int id,const char *nom,const char *description){Service *nouveau=(Service*)malloc(sizeof(Service));
if(nouveau){nouveau->id=id;
strncpy(nouveau->nom,nom,sizeof(nouveau->nom)-1);
nouveau->nom[sizeof(nouveau->nom)-1]='\0';
strncpy(nouveau->description,description,sizeof(nouveau->description)-1);
nouveau->description[sizeof(nouveau->description)-1]='\0';
nouveau->suivant=NULL;}
return nouveau;}
void ajouterService(Service **tete,Service *nouveau){if(!nouveau){return;}
nouveau->suivant=*tete;
*tete=nouveau;}
void supprimerService(Service **tete,int id){Service *courant=*tete,*precedent=NULL;
while(courant&&courant->id!=id){precedent=courant;
courant=courant->suivant;}
if(!courant){return;}
if(precedent){precedent->suivant=courant->suivant;}
else{*tete=courant->suivant;}
free(courant);}
Service *rechercherService(Service *tete,int id){while(tete){if(tete->id==id){return tete;}
tete=tete->suivant;}
return NULL;}
void afficherServices(Service *tete){while(tete){printf("ID:%d, nom:%s, description:%s.\n",tete->id,tete->nom,tete->description);
tete=tete->suivant;}}
void trierServices(Service **tete){if(!*tete||!(*tete)->suivant){return;}
Service *i,*j;
for(i=*tete;i->suivant;i=i->suivant){for(j=i->suivant;j;j=j->suivant){if(strcmp(i->nom,j->nom)>0){Service temp=*i;
*i=*j;
*j=temp;}}}}
