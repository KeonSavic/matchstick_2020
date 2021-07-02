/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** task 03
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char *new_str, char *offset);

char *my_revstr(char *str)
{
    char tmp;
    int end = 0;
    int j = 0;
    char *new_str = malloc(sizeof(char) * my_strlen(str));

    for (int i = 0; str[i] > '\0'; i++)
        new_str[i] = str[i];
    for (end = 0; new_str[end + 1] != '\0'; end++);
    j = end;
    for (int i = 0; i <= end / 2; i++) {
        tmp = new_str[i];
        new_str[i] = new_str[j];
        new_str[j] = tmp;
        j--;
    }
    if (new_str[0] < 32)
        new_str = my_strdup(new_str, &new_str[1]);
    return (new_str);
}