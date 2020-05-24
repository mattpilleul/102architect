/*
** EPITECH PROJECT, 2019
** Project
** File description:
** my_revstr
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int a = my_strlen(str) -1;
    int b;
    char ct;

    for (b = a/2; i <= b; i++) {
        ct = str[i];
        str[i] = str[a];
        str[a] = ct;
        a--;
    }
    return (str);
}

