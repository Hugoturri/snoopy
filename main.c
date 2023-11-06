#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "fonctions.h"
#include "struct.h"


int main(){
    objet plateau[10][20];
    initialiserPlateau(plateau);
    objet snoppy = {5, 9, 0x99};
    plateau[snoppy.ligne][snoppy.colonne] = snoppy;
    afficherPlateau(plateau);
    for (int i = 0; i < 6; i++){
        deplacerSnoppy(&snoppy, plateau);
        afficherPlateau(plateau);
    }
    return 0;

}