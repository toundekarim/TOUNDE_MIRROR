/*
** EPITECH PROJECT, 2025
** usage
** File description:
** description
*/

#include "my.h"

void usage(void)
{
    printf("USAGE\n");
    printf("    ./107transfer [num den]+\n");
    printf("DESCRIPTION\n");
    printf("    num polynomial numerator defined by its coefficients\n");
    printf("    den polynomial denominator defined by its coefficients\n");
    return;
}

int error(int ac, char **av)
{
    for (int a = 1; a < ac; a++) {
        if (error_case(av[a]) == 1)
            return 1;
    }
    return 0;
}
