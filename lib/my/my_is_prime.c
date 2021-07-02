/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** nb prime
*/

int my_is_prime(int nb)
{
    int prime = 0;

    if (nb <= 0)
        return (0);
    while (nb % prime > 0) {
        prime++;
        if (nb == prime)
            return (1);
    }
    return (0);
}
