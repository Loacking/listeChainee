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
    afficherLaListe(maListe);
    insertion(maListe, 100);
    afficherLaListe(maListe);
    insertion(maListe, 999);
    afficherLaListe(maListe);
    insertion(maListe, 767 );
    afficherLaListe(maListe);
    insertion(maListe, 42);
    afficherLaListe(maListe);
    thanos(maListe);
    //isEmpty(maListe);
    afficherLaListe(maListe);
    

    
    
    
    return 0;
}
