/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** Tests the arguments to make sure they are valid.
*/

#include "../include/my.h"
#include <stddef.h>

int error(int ac, char **av)
{
    if (av[1] == NULL)
        return (84);
}