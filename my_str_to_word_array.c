/*
** EPITECH PROJECT, 2025
** my_str_to_word_array.c
** File description:
** a function that divides a given string into token
*/
#include "my.h"

char **my_str_to_word_array(char *str)
{
    int row = my_strlen(str);
    int col = my_count_space(str);
    int a = 0;
    int b = 0;
    int e = 0;
    int d = 0;
    char **table = memory(row, col);

    for (; a < col && b < row; a++) {
        for (; str[b] == '*'; b++);
            d = b;
            for (e = 0; str[b] != '*' && b < row; b++)
                e++;
        strncpy(table[a], &str[d], e);
        table[a][e] = '\0';
    }
    table[a] = NULL;
    return table;
}
