//
// Created by user on 02/11/2023.
//

#ifndef LEFAUX_STRUCT_H
#define LEFAUX_STRUCT_H

typedef struct{
    int ligne, colonne;
    char apparence;
} objet;

void initialiserPlateau(objet plateau[][20]);
void initaliserObjet(objet plateau[][20]);
void depdepSnop(objet snoppy, objet plateau[10][20]);
void deplacerSnoppy(objet *snoppy, objet plateau[][20]);
#endif //LEFAUX_STRUCT_H
