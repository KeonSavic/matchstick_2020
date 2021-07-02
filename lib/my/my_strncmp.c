/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** task 07
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int count = 0;

    n = n - 1;
    while (count < n && s1[count] == s2[count]) {
        count++;
    }
    count = s1[count] - s2[count];
    return (count);
}
