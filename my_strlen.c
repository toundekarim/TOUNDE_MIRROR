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
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return a;
}
