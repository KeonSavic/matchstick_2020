/*
** EPITECH PROJECT, 2021
** init matchstick
** File description:
** initializes the matchstick game
*/

#include "my.h"
#include "matchstick.h"

char get_tile(game_t *game, int i, int j)
{
    int spaces = 0;
    int matches = 0;

    if (i == 0)
        spaces = (game->rows - 1);
    else
        spaces = (game->rows - (1 + (i - 1) * 2));
    matches = game->rows - spaces;
    if (i == 0 || j == 0 || i == game->lines + 1 || j == game->rows + 1) {
        return ('*');
    } else if (j > spaces / 2 && j <= spaces / 2 + matches) {
        return ('|');
    } else {
        return (' ');
    }
}

void create_map(game_t *game)
{
    int i = 0;
    int j = 0;

    for (i = 1; i < game->lines; i++)
        game->rows += 2;
    game->map = malloc(sizeof(char *) * (game->lines + 3));
    for (i = 0; i < game->lines + 3; i++)
        game->map[i] = malloc(sizeof(char) * game->rows + 3);
    for (i = 0; i < game->lines + 2; i++) {
        for (j = 0; j < game->rows + 2; j++)
            game->map[i][j] = get_tile(game, i, j);
        game->map[i][j] = '\0';
    }
    game->map[i] = NULL;
}