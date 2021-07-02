/*
** EPITECH PROJECT, 2021
** MATCHSTICK
** File description:
** MATCHSTICK
*/

#ifndef MATCHSTICK
#define MATCHSTICK

#include <stdio.h>
#include <stdlib.h>

typedef struct gmply_s {
    int line;
    int match_nb;
} gmply_t;

typedef struct game_s {
    gmply_t removing;
    int rows;
    int lines;
    int max_rm;
    int game_over;
    char **map;
} game_t;

/*------FUNCTIONS------*/

void create_map(game_t *game);

void matchstick(game_t *game);
void update_board(game_t *game);

void ai_turn(game_t *game);
int player_turn(game_t *game);

int get_matches_nb_on_line(char *line);
int is_number(char *str);

#endif /* !MATCHSTICK */