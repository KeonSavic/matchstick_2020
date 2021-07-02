/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** get str number
*/

int verify_is_number(char const *str)
{
    if (str[1] <= 47 || str[1] >= 58)
        return (1);
    return (0);
}

int my_getnbr(char const *str)
{
    int nbr = 0;
    int is_nbr = 0;
    int is_neg = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9' && is_nbr == 0) {
            nbr *= 10;
            nbr = nbr + str[i] - '0';
            is_nbr = verify_is_number(&str[i]);
        }
        if (str[i] == '-' && str[i + 1] >= 48 && str[i + 1] <= 57)
            is_neg = 1;
    }
    if (is_neg == 1)
        nbr *= -1;
    return (nbr);
}
