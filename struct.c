//
// Created by user on 02/11/2023.
//

#include "struct.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "fonctions.h"

void initialiserPlateau(objet plateau[][20]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            plateau[i][j].ligne = i;
            plateau[i][j].colonne = j;
            plateau[i][j].apparence = ' ';
        }
    }
}

void initaliserObjet(objet plateau[][20]){
    objet snoppy = {5, 9, 0x99};
    plateau[snoppy.ligne][snoppy.colonne] = snoppy;
}


void depdepSnop(objet snoppy, objet plateau[10][20]){
    int nvLigne = snoppy.ligne;
    int nvColonne = snoppy.colonne;
    int stockLigne = snoppy.ligne;
    int stockColonne = snoppy.colonne;
    char dep = saisirChar();
    if (dep != 'Z' && dep != 'A' && dep != 'S' && dep != 'D' ){
        do{
            printf("Veuillez choisir une direction ! Z ou A ou D ou S !");
            dep = saisirChar();
        }
        while (dep != 'Z' && dep != 'A' && dep != 'S' && dep != 'D');
    }
    if (dep == 'Z'){
        nvLigne = nvLigne - 1;
    }
    else if(dep == 'A'){
        nvColonne = nvColonne - 1;
    }
    else if (dep == 'S'){
        nvLigne = nvLigne + 1;
    }
    else if (dep == 'D'){
        nvColonne = nvColonne + 1;
    }
    if (nvLigne >= 0 && nvLigne < 10 && nvColonne >= 0 && nvColonne < 20) {
        if (plateau[nvLigne][nvColonne].apparence == ' ') {
            plateau[nvLigne][nvColonne].apparence = snoppy.apparence;
            plateau[snoppy.ligne][snoppy.colonne].apparence = 0x0;
        }
    }
}

void deplacerSnoppy(objet *snoppy, objet plateau[][20]) {
    printf("Ou voulez-vous aller ?");
    char direction = saisirChar();
    int nouvelleLigne = snoppy->ligne;
    int nouvelleColonne = snoppy->colonne;

    switch (direction) {
        case 'Z': // Haut
            nouvelleLigne--;
            break;
        case 'S': // Bas
            nouvelleLigne++;
            break;
        case 'A': // Gauche
            nouvelleColonne--;
            break;
        case 'D': // Droite
            nouvelleColonne++;
            break;
        default:
            return; // Sortir si la direction est invalide
    }

    // Vérifier si le déplacement est valide
    if (nouvelleLigne >= 0 && nouvelleLigne < 10 && nouvelleColonne >= 0 && nouvelleColonne < 20) {
        // Effacer l'emplacement actuel de Snoppy
        plateau[snoppy->ligne][snoppy->colonne].apparence = 'X';
        // Mettre à jour les nouvelles coordonnées de Snoppy
        snoppy->ligne = nouvelleLigne;
        snoppy->colonne = nouvelleColonne;
        // Mettre à jour l'apparence de Snoppy sur le plateau
        plateau[snoppy->ligne][snoppy->colonne].apparence = snoppy->apparence;
    }
}