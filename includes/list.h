//
// Created by user on 14/10/2021.
//

#ifndef STRUCTS_LIST_H
#define STRUCTS_LIST_H

#include "car.h"

typedef struct liste
{
    int taille;
    Vehicule * debut;
    Vehicule * fin;
}Liste;

Liste * creation_liste();
void init_liste(Liste * l);
void inserer_vehicule_dans_liste(Liste * l, Vehicule * v);
void afficher_liste_vehicules(Liste * l);

#endif //STRUCTS_LIST_H
