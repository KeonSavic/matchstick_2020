/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** matchstick game
*/

#include "my.h"
#include "matchstick.h"

void check_end_condition(game_t *game, int player_active)
{
    int matches = 0;

    for (int i = 0; game->map[i] != NULL; i++)
        matches += get_matches_nb_on_line(game->map[i]);
    if (matches == 0 && player_active == 1) {
        game->game_over = 2;
        my_show_word_array(game->map);
        my_putstr("You lost, too bad...\n");
    }
    if (matches == 0 && player_active == 0) {
        game->game_over = 1;
        my_show_word_array(game->map);
        my_putstr("I lost... snif... but I'll get you next time!!\n");
    }
}

void update_board(game_t *game)
{
    int i = 1;

    for (; (game->map[game->removing.line][i] != '|') && \
    (game->map[game->removing.line][i] != '\0'); i++) {
        ;
    }
    for (; game->map[game->removing.line][i + 1] == '|'; i++);
    for (int rm = 0; rm < game->removing.match_nb; rm++) {
        game->map[game->removing.line][i] = ' ';
        i--;
    }
}

void matchstick(game_t *game)
{
    int player_active = 1;

    while (game->game_over == 0) {
        my_show_word_array(game->map);
        my_putchar('\n');
        if (player_active == 1) {
            my_putstr("Your turn:\n");
            game->game_over = player_turn(game);
        } else {
            my_putstr("AI's turn...\n");
            ai_turn(game);
        }
        check_end_condition(game, player_active);
        if (player_active == 1)
            player_active = 0;
        else
            player_active = 1;
    }
}