/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** task 06
*/

int my_strcmp(char const *s1, char const *s2)
{
    int count = 0;

    while (s1[count] != '\0' && s2[count] != '\0' && (s1[count] == s2[count]))
        count++;
    return (s1[count] - s2[count]);
}