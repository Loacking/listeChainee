//
//  main.h
//  listeChaineeV2
//
//  Created by Ludovic Doppler on 03/07/2022.
//

#ifndef main_h
#define main_h
/* Mes structures */

typedef struct Element Element;
struct Element{
    int nombre; // Stockage du nombre
    Element *suivant;
};

typedef struct Liste Liste;
struct Liste{
    Element *premier; //Pointeur sur le premier element de la liste
};

/* Mes fonctions */
Liste *initialisation(){
    Element *element = malloc(sizeof(element));
    Liste *liste = malloc(sizeof(liste));
    
    if(element == NULL || liste == NULL){
        exit(EXIT_FAILURE);
    }
    element->suivant = NULL;
    element->nombre = 0;
    liste->premier = element;
    
    return liste;
}

void insertion(Liste *liste,int nvNombre){
    Element *nouveau = malloc(sizeof(*nouveau));
    
    if(liste == NULL || nouveau == NULL){
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;
    /* Insertion de la nouvelle donnee */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void suppression(Liste *liste){
    if(liste == NULL){
        exit(EXIT_FAILURE);
    }
    if (liste->premier != NULL) {
        Element *aSupr = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupr);
        
    }
}

void afficherLaListe(Liste *liste){
    if(liste == NULL){
        exit(EXIT_FAILURE);
    }
    Element *actuel = liste->premier;
    while (actuel != NULL) {
        printf("%d => ",actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
    
}

void addMid(Liste *liste,int target,int nvNombre){ /* IDK  */
    Element *nouveau = malloc(sizeof(nouveau));
    if(liste == NULL){
        exit(EXIT_FAILURE);
    }
   
}
#endif /* main_h */
