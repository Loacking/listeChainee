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
    insertion(maListe, 100);
    afficherLaListe(maListe);
    insertion(maListe, 444);
    afficherLaListe(maListe);
    insertion(maListe, 666);
    afficherLaListe(maListe);
    insertion(maListe, 2000);
    afficherLaListe(maListe);
    insertion(maListe, 30000);
    afficherLaListe(maListe);
    insertion(maListe, 5000);
    afficherLaListe(maListe);
    suprMid(maListe, 2);
    afficherLaListe(maListe);
    
    
    
    return 0;
}
