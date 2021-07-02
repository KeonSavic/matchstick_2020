/*
** EPITECH PROJECT, 2021
** utils
** File description:
** utils
*/

#include "my.h"
#include "matchstick.h"

int is_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (-1);
    }
    return (0);
}