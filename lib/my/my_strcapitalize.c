/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** task 10
*/

char set_low_case(char *str, int index)
{
    if (str[index-1] != 32) {
        return (str[index] + 32);
    } else {
        return (str[index]);
    }
}

char set_up_case(char *str, int index)
{
    int i = 0;

    i = index - 1;
    if (str[i] != 32) {
        if (str[i] >= 33 && str[i] <= 64) {
            return (str[index] - 32);
        } else {
            return (str[index]);
        }
    } else {
        return (str[index] - 32);
    }
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = set_low_case(str, i);
        } else {
            str[i] = set_up_case(str, i);
        }
        if (i == 0)
            str[i] = str[i] - 32;
    }
    return (str);
}
