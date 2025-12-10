#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"logs.h"
void ecrireLog(const char *nomFichier,const char *message){FILE *fichier=fopen(nomFichier,"a");
if(!fichier){perror("Erreur d'ouverture du fichier de log!");
return;}
time_t maintenant=time(NULL);
char *heure=ctime(&maintenant);
heure[strlen(heure)-1]='\0';
fprintf(fichier,"[%s]%s\n",heure,message);
fclose(fichier);}
