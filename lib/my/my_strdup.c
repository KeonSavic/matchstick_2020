/*
** EPITECH PROJECT, 2020
** mystrdup
** File description:
** duplicates a string into another non allocated
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char *dest, char *src)
{
    int i = 0;

    dest = malloc(sizeof(char) * my_strlen(src));
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}