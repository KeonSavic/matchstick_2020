/*
** EPITECH PROJECT, 2020
** back to first node
** File description:
** goes back to the start of a chained list
*/

#include "my.h"
#include <stdlib.h>

lnkd_list_s *back_to_first_node( *files)
{
    while (files->prev != NULL) {
        files = files->prev;
    }
    return (files);
}