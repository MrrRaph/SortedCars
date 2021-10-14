#include <stdlib.h>
#include <stdio.h>
#include "../includes/bubbleSort.h"
#include "../includes/car.h"
#include "../includes/list.h"

int main() {
    int vehicleNumber;
    printf("Rentrer le nombre de vehicules : ");
    scanf("%d", &vehicleNumber);

    Liste * l = creation_liste();
    init_liste(l);

    printf("Taille: %d\n", l->taille);

    Vehicule * v = NULL;
    for (int i = 0; i < vehicleNumber; ++i)
    {
        v = init_vehicule_avec_pointeur_2();
        inserer_vehicule_dans_liste(l, v);
    }

    free(v);
    free(l);
    return EXIT_SUCCESS;
}
