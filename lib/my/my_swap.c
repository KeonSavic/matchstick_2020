/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** task 01
*/

void my_swap(int *a, int *b)
{
    int save = 0;

    save = *a;
    *a = *b;
    *b = save;
}
