/*
** EPITECH PROJECT, 2025
** free_function.c
** File description:
** free_function.c
*/
#include "my.h"

void free_first(init_t *init)
{
    for (int a = 0; init->tab[a] != NULL; a++) {
        free(init->tab[a]);
    }
    free(init->tab);
}

void free_second(init_t *init)
{
    for (int a = 0; init->tabe[a] != NULL; a++) {
        free(init->tabe[a]);
    }
    free(init->tabe);
}
