/*
** EPITECH PROJECT, 2025
** memory.c
** File description:
** memory.c
*/

#include "my.h"
#include <stdlib.h>

char **memory(int r, int c)
{
    int a = 0;
    char **tab = NULL;

    tab = malloc(sizeof(char *) * (r + 1));
    for (a = 0; a < r; a++) {
        tab[a] = malloc(sizeof(char) * (c + 1));
    }
    return tab;
}
