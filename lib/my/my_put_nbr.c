/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** task 07
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int number = nb;
    int temp = 0;

    if (nb < 0) {
        my_putchar(45);
        number = nb * (-1);
        my_put_nbr(number);
    } else {
        if (nb < 10) {
            my_putchar(nb + 48);
        } else {
            temp = (nb % 10);
            nb = (nb - temp) / 10;
            my_put_nbr(nb);
            my_putchar(temp + 48);
        }
    }
    return (0);
}