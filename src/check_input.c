/*
** EPITECH PROJECT, 2021
** check input
** File description:
** verifies the validity of the input by the player
*/

#include "my.h"
#include "matchstick.h"

int check_input_matches(game_t *game, char *input)
{
    int tmp = 0;

    if (is_number(input) == -1)
        return (-1);
    tmp = my_getnbr(input);
    if (tmp > game->max_rm || tmp < 1)
        return (-1);
    game->removing.match_nb = tmp;
    return (0);
}

int check_input_line(game_t *game, char *input)
{
    int tmp = 0;

    if (is_number(input) == -1)
        return (-1);
    tmp = my_getnbr(input);
    if (tmp > game->lines || tmp < 1 || tmp > 100)
        return (-1);
    game->removing.line = tmp;
    return (0);
}