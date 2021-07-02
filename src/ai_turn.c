/*
** EPITECH PROJECT, 2021
** ai turn
** File description:
** handles ai's turn
*/

#include "my.h"
#include "matchstick.h"

int last_line_left(char **map)
{
    int valid_line = 0;

    for (int i = 0; map[i] != NULL; i++) {
        if (get_matches_nb_on_line(map[i]) > 0)
            valid_line++;
    }
    if (valid_line > 1)
        return (1);
    return (0);
}

void ai_algo(game_t *game)
{
    int i = 0;
    int most_match_line = 0;

    for (i = 1; game->map[i] != NULL; i++) {
        if (get_matches_nb_on_line(game->map[i]) > \
        get_matches_nb_on_line(game->map[most_match_line]))
            most_match_line = i;
    }
    game->removing.line = most_match_line;
    if (get_matches_nb_on_line(game->map[most_match_line]) >= game->max_rm)
        game->removing.match_nb = game->max_rm;
    else if (last_line_left(game->map) == 1)
        game->removing.match_nb = 1;
    else
        game->removing.match_nb = \
        get_matches_nb_on_line(game->map[most_match_line]);
}

void ai_turn(game_t *game)
{
    ai_algo(game);
    my_putstr("AI removed ");
    my_put_nbr(game->removing.match_nb);
    my_putstr(" match(es) from line ");
    my_put_nbr(game->removing.line);
    my_putchar('\n');
    update_board(game);
}