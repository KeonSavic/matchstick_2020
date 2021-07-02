/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** task 01
*/

char *my_strcpy(char *dest, char const *src)
{
    int count = 0;

    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        count++;
    }
    dest[count+1] = '\0';
    return (dest);
}
