//
// Created by user on 14/10/2021.
//

#include "../includes/list.h"
#include <stdlib.h>
#include <stdio.h>

Liste * creation_liste()
{
    Liste * l = malloc(sizeof(Liste));
    return l;
}

void init_liste(Liste * l)
{
    l->taille = 0;
    l->debut = NULL;
    l->fin = NULL;
}

void inserer_vehicule_dans_liste(Liste * l, Vehicule * v)
{
    printf("Véhicule à insérer => Marque :\t%s | Puissance : %d | Vitesse max : %d\n", v->marque, v->puissance, v->vitesse_max);
    if(!l->taille)
    {
        l->debut = v;
        l->fin = v;
        ++l->taille;
    }
    else
    {
        if(l->debut->puissance >= v->puissance)
        {
            v->next = l->debut;
            l->debut = v;
            ++l->taille;
        }
        else if(l->fin->puissance <= v->puissance)
        {
            l->fin->next = v;
            l->fin = v;
            ++l->taille;
        }
        else
        {
            Vehicule * temp = l->debut;
            for (int i = 0; i < l->taille - 1; ++i)
            {
                if(v->puissance >= temp->puissance && v->puissance <= temp->next->puissance)
                {
                    v->next = temp->next;
                    temp->next = v;
                    ++l->taille;
                    break;
                }
                temp = temp->next;
            }
        }
    }
    afficher_liste_vehicules(l);
}

void afficher_liste_vehicules(Liste * l)
{
    puts("----------------------------------------------------------------------------------");
    printf("Liste après insertion : (%d Véhicule%s\n", l->taille, l->taille > 0 ? "s)" : ")");
    Vehicule * v = l->debut;
    for (int i = 0; i < l->taille; ++i)
    {
        printf("N° %d => Marque :\t%s | Puissance : %d | Vitesse max : %d\n", i + 1, v->marque, v->puissance, v->vitesse_max);
        v = v->next;
    }
    puts("----------------------------------------------------------------------------------");
}