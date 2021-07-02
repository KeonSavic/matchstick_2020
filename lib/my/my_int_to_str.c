/*
** EPITECH PROJECT, 2020
** my_int_to_str.c
** File description:
** function to convert an integer to a string
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

char *check_neg_one(int i, int new_nb, char *result)
{
    result[i] = (new_nb % 10) + '0';
    result[i + 1] = '-';
    result[i + 2] = '\0';
    result = my_revstr(result);
    return (result);
}

char *get_size(char *result, int *new_nb)
{
    int nb_len = 0;

    for (nb_len = 0; (*new_nb) / 10 > 10; nb_len++)
        (*new_nb) = (*new_nb) / 10;
    result = malloc(sizeof(char) * nb_len + 2);
    return (result);
}

char *finish_str(char *result, int i, int new_nb)
{
    result[i] = (new_nb % 10) + '0';
    result[i + 1] = '\0';
    result = my_revstr(result);
    return (result);
}

char *get_str(int *i, int (*new_nb), char *result)
{
    for ((*i) = 0; (*new_nb) >= 10; (*i)++) {
        result[(*i)] = ((*new_nb) % 10) + '0';
        (*new_nb) = (*new_nb) / 10;
    }
    return (result);
}

char *my_int_to_str(int nb)
{
    int i = 0;
    int new_nb = nb;
    char *result = NULL;
    int neg = 0;

    if (nb == 0)
        return ("0");
    result = get_size(result, &new_nb);
    if (nb < 0) {
        neg = 1;
        nb = nb * (-1);
    }
    new_nb = nb;
    get_str(&i, &new_nb, result);
    if (neg == 1) {
        result = check_neg_one(i, new_nb, result);
        return (result);
    }
    return (finish_str(result, i, new_nb));
}