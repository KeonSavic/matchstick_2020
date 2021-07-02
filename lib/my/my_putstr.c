/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** task 02
*/

#include "my.h"

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}
