/*
** EPITECH PROJECT, 2020
** my show word array
** File description:
** show a word array
*/

#include "my.h"
#include <stdlib.h>

void my_show_word_array(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++) {
        my_putstr(arr[i]);
        my_putchar('\n');
    }
}