/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** cat str
*/

char *my_strcat(char *dest, char const *src)
{
    int dest_lenght = 0;
    int j = 0;

    for (int i = 0; dest[i] != '\0'; i++)
        dest_lenght++;
    while (src[j] != '\0') {
        dest[dest_lenght] = src[j];
        dest_lenght++;
        j++;
    }
    dest[dest_lenght] = '\0';
    return (dest);
}
