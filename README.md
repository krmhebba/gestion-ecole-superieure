# Système de Gestion d'École Supérieure

## Description
Application complète de gestion universitaire développée en langage C. Ce projet est conçu pour administrer l'ensemble des acteurs d'un établissement (Étudiants, Professeurs, Lauréats) ainsi que les Services administratifs. L'architecture repose sur une modularité stricte et l'utilisation de structures de données dynamiques adaptées à chaque entité.

## Fonctionnalités Détaillées

### 1. Gestion des Étudiants
* **Structure de données :** Liste doublement chaînée (Doubly Linked List) permettant une navigation bidirectionnelle.
* **Données gérées :** ID, Nom, Filière.
* **Opérations :** Création, Ajout, Suppression par ID, Recherche, Affichage.
* **Algorithme :** Tri alphabétique des étudiants par nom.

### 2. Gestion des Professeurs
* **Structure de données :** Liste simplement chaînée.
* **Données gérées :** ID, Nom, Département.
* **Opérations :** Gestion complète (CRUD) et tri alphabétique par nom.

### 3. Gestion des Lauréats (Anciens élèves)
* **Structure de données :** Liste simplement chaînée.
* **Données gérées :** ID, Nom, Année d'obtention du diplôme.
* **Opérations :** Gestion complète et tri chronologique par année de diplôme.

### 4. Gestion des Services
* **Structure de données :** Liste simplement chaînée.
* **Données gérées :** ID, Nom du service, Description.
* **Opérations :** Gestion complète et tri alphabétique.

### 5. Système de Fichiers et Logs
* **Persistance :** Sauvegarde et chargement automatique des données via des fichiers textes séparés (`etudiants.txt`, `profs.txt`, `laureats.txt`, `services.txt`) utilisant un format CSV (séparateur `;`).
* **Journalisation (Logging) :** Module dédié (`logs.c`) qui enregistre les opérations critiques avec un horodatage précis dans un fichier `log.txt` pour assurer la traçabilité.

## Structure Technique du Projet
* **main.c :** Programme principal orchestrant l'initialisation, les tests d'ajout et la sauvegarde globale.
* **etudiants.c/h :** Logique métier pour les étudiants (pointeurs `suivant` et `precedent`).
* **profs.c/h :** Logique métier pour le corps professoral.
* **laureats.c/h :** Logique métier pour les lauréats.
* **services.c/h :** Logique métier pour les services de l'école.
* **fichiers.c/h :** Gestion des entrées/sorties fichiers (I/O).
* **logs.c/h :** Gestion de l'historique des événements système.

## Installation
1. Cloner le dépôt.
2. Compiler tous les modules ensemble :
   gcc main.c etudiants.c profs.c laureats.c services.c fichiers.c logs.c -o ecole_app
3. Lancer l'application :
   ./ecole_app

## Auteurs
Projet réalisé par Hiba Karam en collaboration avec Tarek Souibri.
