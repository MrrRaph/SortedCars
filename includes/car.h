//
// Created by user on 14/10/2021.
//

#ifndef STRUCTS_CAR_H
#define STRUCTS_CAR_H

typedef struct voiture
{
    char marque[20];
    int puissance;
    int vitesse_max;
    struct voiture * next;
}Vehicule;

Vehicule init_vehicule_sans_pointeur();
void affiche_vehicule_sans_pointeur(Vehicule v);
void init_vehicule_avec_pointeur_1(Vehicule * v);
Vehicule * init_vehicule_avec_pointeur_2();
void affiche_vehicule_avec_pointeur(Vehicule * v);

#endif //STRUCTS_CAR_H
