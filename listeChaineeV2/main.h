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
    /* Inserting the new element */
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
int isEmpty(Liste *liste){
    return liste->premier == NULL;
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

void addMid(Liste *liste,int target,int nvNombre){ /* IDK  ça fonctionne*/
    Element *nouveau = malloc(sizeof(nouveau));
    Element *actuel = liste->premier;
    if(liste == NULL){
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;
    int i = 0;
    while (i != target) {
        if(actuel->suivant == NULL){
            exit(EXIT_FAILURE);
        }
        actuel = actuel->suivant;
        i++;
    }
    nouveau->nombre = nvNombre;
    printf("Add a number after %d...\n%d has been successfully added!\n",actuel->nombre,nvNombre);
    /* Inserting the new element */
    nouveau->suivant = actuel->suivant;
    actuel->suivant = nouveau;
   
}

void suprMid(Liste *liste,int target){
    if(liste == NULL){
        exit(EXIT_FAILURE);
    }
    if(target != 0){
        Element *actuel = liste->premier;
        Element *aSupr = liste->premier;
        int i = 1;
        while (i < target) {
            i++;
            actuel = actuel->suivant;
        }
        aSupr = actuel->suivant;
        actuel->suivant = actuel->suivant->suivant;
        printf("Removing... %d is free! \n",aSupr->nombre);
        free(aSupr);
    }else{
        printf("Removing... %d is free! \n",liste->premier->nombre);
        suppression(liste);
    }
   
}



void thanos(Liste *liste){
   
    
    while (liste->premier != NULL) {
        printf("here : ");
        afficherLaListe(liste);
        Element *tmp = liste->premier;
        liste->premier = liste->premier->suivant;
        free(tmp);
        
        
    }
}

#endif /* main_h */
