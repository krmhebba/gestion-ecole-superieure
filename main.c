#include<stdio.h>
#include<stdlib.h>
#include"etudiants.h"
#include"profs.h"
#include"laureats.h"
#include"services.h"
#include"logs.h"
int main(){Etudiant *listeEtudiants=NULL;
Prof *listeProfs=NULL;
Laureat *listeLaureats=NULL;
Service *listeServices=NULL;
Etudiant *e1=creerEtudiant(1,"Hiba","PA&SD1");
Etudiant *e2=creerEtudiant(2,"Tarek","TP PA&SD1");
ajouterEtudiant(&listeEtudiants,e1);
ajouterEtudiant(&listeEtudiants,e2);
Prof *p1=creerProf(1,"O.El Haouari","PA&SD1");
Prof *p2=creerProf(2,"M. Jbel","TP PA&SD1");
ajouterProf(&listeProfs,p1);
ajouterProf(&listeProfs,p2);
Laureat *l1=creerLaureat(1,"Kebdani",2024);
Laureat *l2=creerLaureat(2,"Talouni",2023);
ajouterLaureat(&listeLaureats,l1);
ajouterLaureat(&listeLaureats,l2);
Service *s1=creerService(1,"Bibliotheque","Acces aux livres.");
Service *s2=creerService(2,"Service tirage","Impression et photocopie.");
ajouterService(&listeServices,s1);
ajouterService(&listeServices,s2);
printf("Liste des étudiants:\n");
afficherEtudiants(listeEtudiants);
printf("\nListe des professeurs:\n");
afficherProfs(listeProfs);
printf("\nListe des lauréats:\n");
afficherLaureats(listeLaureats);
printf("\nListe des services:\n");
afficherServices(listeServices);
sauvegarderEtudiants("etudiants.txt",listeEtudiants);
sauvegarderProfs("profs.txt",listeProfs);
sauvegarderLaureats("laureats.txt",listeLaureats);
sauvegarderServices("services.txt",listeServices);
ecrireLog("log.txt","Operation de sauvegarde terminee!");
supprimerEtudiant(&listeEtudiants,1);
supprimerProf(&listeProfs,1);
supprimerLaureat(&listeLaureats,1);
supprimerService(&listeServices,1);
return 0;}
