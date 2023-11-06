//
// Created by user on 02/11/2023.
//
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include "fonctions.h"
#include "struct.h"

void viderBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

char saisirChar(){
    printf("veuillez saisir un caractere : \n");
    char zed = getchar();
    viderBuffer();
    return zed;
}

void afficherPlateau(objet plateau[][20]){
    system("cls");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            printf("%c", plateau[i][j].apparence);
        }
        printf("\n");
    }
}

int chronometre(){
    int chrono = 120;
    for ( int i = 0; i < 120; i++ ){
        sleep(1);
        printf("%d\n", chrono);
        chrono -= 1;
    }
    return chrono;
}
