#include"Flotte.h"
#include"Bateau.h"
#define MAXL 50
#define MAXC 50


void fPlayer(Case mCase, Flotte* f) {

    int i;
    int valRandPosLigne = 0;
    int valRandPosCol = 0;
    int valRandTailleBateau = 0;



    for (i = 0; i < NBBATEAU; i++) {

        valRandPosLigne = rand() % (MAXL - MAXCASE) + 1;
        valRandPosCol = rand() % (MAXC - MAXCASE) + 1;
        valRandTailleBateau = rand() % MAXCASE + 1;
        createCase(valRandPosLigne, valRandPosCol, &mCase);
        f->nBateau[i] = createBateau(mCase, valRandTailleBateau);


    }



}