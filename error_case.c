/*
** EPITECH PROJECT, 2025
** error.case
** File description:
** shortcut
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
int error_cut(char *av, int i, int k)
{
    if (av[i] == '*' && (av[i + 1] == '*'))
        return 1;
    if (i == k || i == 0) {
        if (av[i] == '*')
            return 1;
    }
    if (av[i] == '-' && (av[i + 1] == '-' || av[i + 1] == '*'))
        return 1;
    if (i == k) {
        if (av[i] == '-')
            return 1;
    }
    return 0;
}

int error_case(char *av)
{
    int b = 0;
    int c = my_strlen(av);
    int k = my_strlen(av) - 1;

    for (int i = 0; av[i] != '\0'; i++) {
        if (av[i] >= 48 && av[i] <= 57 || av[i] == '*' || av[i] == '-')
            b++;
        if (error_cut(av, i, k) == 1)
            return 1;
    }
    if (b == c)
        return 0;
    else
        return 1;
}
