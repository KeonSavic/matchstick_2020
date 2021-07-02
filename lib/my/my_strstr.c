/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** task 05
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int find_count = 0;
    int count = 0;
    int a = 0;

    for (int i = 0; to_find[i] != '\0'; i++)
        find_count++;
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] == to_find[count]) {
            count++;
            if (count == find_count)
                return &str[(j-find_count)+1];
        } else {
            if (count != 0)
                count = 0;
        }
        a++;
    }
    return (NULL);
}
