/*
** EPITECH PROJECT, 2025
** tests
** File description:
** tests
*/
#include "../my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stderr();
}

Test (my_strlen, base1)
{
    int i = my_strlen("Papa");

    cr_redirect_stdout();
    cr_assert_eq(i, 4);
}
