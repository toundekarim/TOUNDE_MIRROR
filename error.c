/*
** EPITECH PROJECT, 2025
** error.c
** File description:
** error.c
*/
#include "my.h"

int count(char *str)
{
    int count = 0;

    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] >= '0' && str[a] <= '9')
            count++;
    }
    return count;
}

int count_separator(char *str)
{
    int count = 0;

    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] == '*')
            count++;
    }
    return count;
}

int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return 0;
    return 1;
}
