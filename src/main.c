/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "my.h"
#include "matchstick.h"

int error_check(int argc, char **argv)
{
    if (argc != 3)
        return (-1);
    if (is_number(argv[1]) == -1 || is_number(argv[2]) == -1)
        return (-1);
    return (0);
}

int main (int argc, char **argv)
{
    game_t *game;

    if (error_check(argc, argv) == -1)
        return (84);
    game = malloc(sizeof(game_t) * 1);
    game->rows = 1;
    game->game_over = 0;
    game->lines = my_getnbr(argv[1]);
    game->max_rm = my_getnbr(argv[2]);
    create_map(game);
    matchstick(game);
    return (game->game_over);
}