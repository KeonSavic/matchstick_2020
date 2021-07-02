/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** find prime sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb % 2 == 0 && nb > 2)
        nb++;
    for (int i = 0; my_is_prime(nb) != 0; i++)
        nb += 2;
    return (nb);
}
