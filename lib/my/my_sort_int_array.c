/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sort array
*/

int switch_tab(int i, int *tab)
{
    int save = 0;

    if (i > 0) {
        save = tab[i];
        tab[i] = tab[i - 1];
        tab[i - 1] = save;
        return (i - 2);
    } else {
        return (i);
    }
}

void my_sort_int_array(int *tab, int size)
{
    for (int i = 0; size != i; i++) {
        if (tab[i] < tab[i - 1])
            i = switch_tab(i, tab);
    }
}
