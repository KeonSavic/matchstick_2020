/*
** EPITECH PROJECT, 2020
** my_showstr
** File description:
** task 20
*/

#include "my.h"

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_str_isprintable(str) == 1) {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            if (str[i] < 16)
                my_putchar('0');
            my_putnbr_base(str[i], "0123456789abcdef");
        }
    }
    return (0);
}
