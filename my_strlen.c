/*
** EPITECH PROJECT, 2024
** my_strlen.c
** File description:
** string length
*/

#include <unistd.h>
#include <stdio.h>
#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
