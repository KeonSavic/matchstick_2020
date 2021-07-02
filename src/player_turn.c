/*
** EPITECH PROJECT, 2021
** player turn
** File description:
** handles the plaeyr's turn
*/

#include "my.h"
#include "matchstick.h"

int get_matches_nb_on_line(char *line)
{
    int matches = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '|')
            matches++;
    }
    return (matches);
}

int get_player_matches(game_t *game, char *input, size_t len)
{
    my_putstr("Matches: ");
    while (getline(&input, &len, stdin) == -1);
    if (my_is_number(input) == 0) {
        my_putstr("Error: select a valid number\n");
        return (-1);
    }
    game->removing.match_nb = my_getnbr(input);
    if (game->removing.match_nb > \
    get_matches_nb_on_line(game->map[game->removing.line])) {
        my_putstr("Error: not enough matches on this line\n");
        return (-1);
    }
    if (game->removing.match_nb > game->max_rm || \
    game->removing.match_nb <= 0) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(game->max_rm);
        my_putstr(" matches per turn nor less than 1\n");
        return (-1);
    }
    return (0);
}

int get_player_line(game_t *game, char *input, size_t len)
{
    ssize_t size = 0;

    my_putstr("Line: ");
    while (size = getline(&input, &len, stdin) == -1 && my_strlen(input) != 0);
    if (size == -1 || (size == 0 && my_strlen(input) == 0))
        return (1);
    if (my_is_number(input) == 0) {
        my_putstr("Error: select a valid number\n");
        return (-1);
    }
    game->removing.line = my_getnbr(input);
    if (game->removing.line > game->lines || game->removing.line <= 0) {
        my_putstr("Error: this line is out of range\n");
        return (-1);
    }
    if (get_player_matches(game, input, len) == -1)
        while (get_player_line(game, input, len) == -1);
    return (0);
}

int player_turn(game_t *game)
{
    int rtrn = -1;
    int valid = 0;
    size_t len = 0;
    char *input = NULL;

    while (rtrn == -1)
        rtrn = get_player_line(game, input, len);
    if (rtrn == 1)
        return (84);
    my_putstr("Player removed ");
    my_put_nbr(game->removing.match_nb);
    my_putstr(" match(es) frome line ");
    my_put_nbr(game->removing.line);
    my_putchar('\n');
    update_board(game);
    return (0);
}