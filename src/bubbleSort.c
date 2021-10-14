//
// Created by user on 14/10/2021.
//

#include "../includes/bubbleSort.h"
#include <stdlib.h>

Vehicule * alloc_tab_veh_dyn(int n)
{
    return malloc(n * sizeof(Vehicule));
}

void tri_a_bulles(Vehicule * mesvehicules, int n)
{
    int isSorted = 1;
    do
    {
        isSorted = 1;
        for (int i = 0; i <= n - 2; ++i)
            if(mesvehicules[i].puissance > mesvehicules[i + 1].puissance)
            {
                Vehicule temp = mesvehicules[i];
                mesvehicules[i] = mesvehicules[i + 1];
                mesvehicules[i + 1] = temp;
                isSorted = 0;
            }
    }while(!isSorted);
}