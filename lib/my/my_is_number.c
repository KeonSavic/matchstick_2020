/*
** EPITECH PROJECT, 2020
** my is number
** File description:
** checks if char is nmber
*/

#include "my.h"

int my_is_number(char *str)
{
    for (int i = 0; str[i] != '\n'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}