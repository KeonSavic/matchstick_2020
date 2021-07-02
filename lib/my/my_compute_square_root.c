/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** taske 05
*/

int my_compute_square_root(int nb)
{
    int a = 0;

    if (nb < 1) {
        return (0);
    }
    while (a < nb) {
        if (a * a == nb) {
            return (a);
        }
        a++;
    }
    return (0);
}
