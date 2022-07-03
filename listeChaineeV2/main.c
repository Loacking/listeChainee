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
    afficherLaListe(maListe);
    
    return 0;
}
