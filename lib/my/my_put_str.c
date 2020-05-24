/*
** EPITECH PROJECT, 2019
** put_str
** File description:
** put_str
*/

#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

void my_putstr_i(char *str, int max)
{
    int i = 0;

    while (str[i] != '\0' && i < max) {
        if ((int)str[i] == 92 && (int)str[i+1] == 110)
            my_putchar(10);
        else
            my_putchar(str[i]);
        i++;
    }
}
