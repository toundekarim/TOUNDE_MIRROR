/*
** EPITECH PROJECT, 2025
** shortcut
** File description:
** shorcut
*/

#include "my.h"

double num(char *str, char *str2, double b, init_t *init)
{
    *init = (init_t){.tab = NULL, .res = 0.00000, .res2 = 0.00000,
        .res3 = 0.00000, .tabe = NULL};
    init->tab = my_str_to_word_array(str);
    init->tabe = my_str_to_word_array(str2);
    for (int i = 0; init->tab[i] != NULL; i++) {
        init->res = init->res + (atof(init->tab[i]) * pow(b, i));
    }
    for (int c = 0; init->tabe[c] != NULL; c++) {
        init->res2 = init->res2 + (atof(init->tabe[c]) * pow(b, c));
    }
    if (init->res2 == 0)
        exit(84);
    init->res3 = init->res / init->res2;
    init->res = 0.00000;
    init->res2 = 0.00000;
    free_first(init);
    free_second(init);
    return init->res3;
}

double lep(int ac, char **av, double x, init_t *init)
{
    double res = 1;

    for (int a = 1; av[a] != NULL; a = a + 2) {
        res *= (num(av[a], av[a + 1], x, init));
        }
    return res;
}

void looping(int ac, char **av, init_t *init)
{
    double res = 0;

    for (double b = 0.000; b < 1.001; b = b + 0.001) {
        res = lep(ac, av, b, init);
        printf("%.3f -> %.5f\n", b, res);
    }
}

int main(int ac, char **av)
{
    init_t *init = malloc(sizeof(init_t));

    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        usage();
        return 0;
    }
    if (ac < 2 || ac % 2 == 0)
        return 84;
    if (error(ac, av) == 1)
        return 84;
    else
        looping(ac, av, init);
    free(init);
}
