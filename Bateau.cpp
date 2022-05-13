#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>
#include<string.h>
#include "Bateau.h"
#include"Case.h"
//Fct de création de bateau
//Return une structure bateau
Bateau createBateau(Case nCase, int taille) {

    Bateau res;


    positionBateau = rand() % 3;


    int i;
    for (i = 0; i < MAXCASE; i++) {
        if (i < taille) {
            res.nCase[i].ligne = nCase.ligne;
            res.nCase[i].col = nCase.col;
        }
        else {

            res.nCase[i].ligne = 0;
            res.nCase[i].col = 0;
        }
        if (positionBateau == enLigne) {

            nCase.col++;

        }
        else if (positionBateau == enColonne) {

            nCase.ligne++;

        }
        else if (positionBateau == enDiag) {

            nCase.ligne++;
            nCase.col++;
        }



    }

    return res;
}
