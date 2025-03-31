/*
** EPITECH PROJECT, 2025
** my_count_space.c
** File description:
** a function that counts the number of paces in a given string
*/
#include "my.h"

int my_count_space(char const *str)
{
    int ln = 0;
    int count = 0;

    for (; str[ln] != '\0'; ln++) {
        if (str[ln] == '*');
        count = count + 1;
    }
    return count + 1;
}
