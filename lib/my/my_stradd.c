/*
** EPITECH PROJECT, 2020
** my stradd
** File description:
** adds a string at the end of astr
*/

#include "my.h"
#include <stdlib.h>

char *my_stradd(char *s1, char *s2)
{
    int i = 0;
    char *final_str = malloc(sizeof(char) * my_strlen(s1) + my_strlen(s2));

    for (int j = 0; s1[j] != '\0'; j++) {
        final_str[i] = s1[j];
        i++;
    }
    for (int j = 0; s2[j] != '\0'; j++) {
        final_str[i] = s1[i];
        i++;
    }
    return (final_str);
}