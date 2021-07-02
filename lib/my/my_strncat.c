/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** cat n str
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_lenght = 0;
    int j = 0;

    for (int i = 0; dest[i] != '\0'; i++)
        dest_lenght++;
    while (src[j] != '\0' && j < nb) {
        dest[dest_lenght] = src[j];
        dest_lenght++;
        j++;
    }
    dest[dest_lenght] = '\0';
    return (dest);
}
