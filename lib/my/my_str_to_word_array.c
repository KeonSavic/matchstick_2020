/*
** EPITECH PROJECT, 2020
** my str to word array
** File description:
** allocates a tab and puts words from a str in it
*/

#include "my.h"
#include <stdlib.h>

int char_is_valid(char c)
{
    int value = 1;
    if (c == '\n')
        value = 0;

    return (value);
}

int count_words(char *str)
{
    int i = 0;
    int words_nb = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            words_nb++;
    }
    if (str[i - 1] != '\n' && str[i] == '\0')
        words_nb++;
    return (words_nb);
}

char **allocate_size_for_tab(char *str, char **tab, int word_nb)
{
    int j = 0;
    int letter_count = 0;

    tab = malloc(sizeof(char *) * word_nb);
    for (int i = 0; str[i] != '\0'; i++) {
        for (; str[i] != '\n' && str[i] != '\0'; letter_count++)
            i++;
        tab[j] = malloc(sizeof(char) * letter_count);
        letter_count = 0;
        j++;
    }
    return (tab);
}

char **my_str_to_word_array(char *str)
{
    int i = 0;
    int j = 0;
    char **tab = NULL;
    int word_nb = count_words(str);

    if (str == NULL)
        return (NULL);
    tab = allocate_size_for_tab(str, tab, word_nb);
    for (int index = 0; i < word_nb; index++) {
        for (j = 0; str[index] != '\n' && str[index] != '\0'; index++) {
            tab[i][j] = str[index];
            j++;
        }
        tab[i][j] = '\0';
        i++;
    }
    tab[i] = '\0';
    return (tab);
}