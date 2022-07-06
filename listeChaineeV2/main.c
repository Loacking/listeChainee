//
//  main.c
//  listeChaineeV2
//
//  Created by Ludovic Doppler on 03/07/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, const char * argv[]) {

    Liste *maListe = initialisation();
    insertion(maListe, 5);
    insertion(maListe, 11);
    insertion(maListe, 13);
    insertion(maListe, 22);
    insertion(maListe, 19);
    afficherLaListe(maListe); // 19 22 13 11 5 0
    addMid(maListe, 22, 14);
    addMid(maListe, 13, 133);
    suprMid(maListe, 133);
    afficherLaListe(maListe); //19 22 14 13 133 11 5 0
    
    return 0;
}
