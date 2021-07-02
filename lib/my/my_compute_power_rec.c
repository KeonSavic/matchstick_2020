/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** task 04
*/

int my_compute_power_rec(int nb, int p)
{
    int temp = 0;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    p--;
    temp = nb * my_compute_power_rec(nb, p);
    return (temp);
}
