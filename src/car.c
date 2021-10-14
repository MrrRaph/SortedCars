//
// Created by user on 14/10/2021.
//

#include "../includes/car.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static char listMarque[5][20] =
        {
                "BMW",
                "Lamborghini",
                "Ferrari",
                "Bugatti",
                "Tesla"
        };

Vehicule init_vehicule_sans_pointeur()
{
    Vehicule v;
    strcpy(v.marque, listMarque[rand() % 5]);
    v.puissance = 100 + rand() % 600;
    v.vitesse_max = 180 + rand() % 220;
    return v;
}

void affiche_vehicule_sans_pointeur(Vehicule v)
{
    printf("Vehicule %s\nPuissance = %d\nVitesse Max = %d\n", v.marque, v.puissance, v.vitesse_max);
}

void init_vehicule_avec_pointeur_1(Vehicule * v)
{
    strcpy(v->marque, listMarque[rand() % 5]);
    v->puissance = 100 + rand() % 600;
    v->vitesse_max = 180 + rand() % 220;
    v->next = NULL;
}

Vehicule * init_vehicule_avec_pointeur_2()
{
    Vehicule * v = malloc(sizeof(Vehicule));
    init_vehicule_avec_pointeur_1(v);
    return v;
}

void affiche_vehicule_avec_pointeur(Vehicule * v)
{
    printf("Vehicule %s\nPuissance = %d\nVitesse Max = %d\n", v->marque, v->puissance, v->vitesse_max);
}

