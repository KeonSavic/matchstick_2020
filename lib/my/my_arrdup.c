/*
** EPITECH PROJECT, 2021
** my arr dup
** File description:
** duplicates an array, malloc + content
*/

#include "../../include/my.h"
#include <stdlib.h>

int get_word_nb(char **arr)
{
    int word_nb = 0;

    for (int i = 0; arr[i] != NULL; i++)
        word_nb++;
    return (word_nb);
}

char **my_arrdup(char **arr)
{
    int i = 0;
    int j = 0;
    int word_nb = get_word_nb(arr);
    char **new_arr = malloc(sizeof(char *) * word_nb + 1);

    for (i = 0; i != word_nb; i++)
        new_arr[i] = my_strdup(new_arr[i], arr[i]);
    new_arr[i] = NULL;
    for (i = 0; new_arr[i] != NULL; i++) {
        for (j = 0; new_arr[i][j + 1] != '\0'; j++);
        if (new_arr[i][j] == '!')
            new_arr[i][j] = '\0';
    }
    return (new_arr);
}