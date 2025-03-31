/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** hhhhh
*/
#ifndef MY_H
    #define MY_H
    #include <string.h>
    #include <unistd.h>
    #include <math.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
typedef struct ini {
    char **tab;
    char **tabe;
    double res;
    double res2;
    double res3;
}init_t;
int my_strlen(char *str);
void usage(void);
int error_case(char *av);
int error(int ac, char **av);
int main(int ac, char **av);
char **memory(int r, int c);
int my_count_space(char const *str);
char **my_str_to_word_array(char *str);
void free_first(init_t *init);
void free_second(init_t *init);
#endif
