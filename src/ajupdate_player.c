/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_player
*/

#include "../include/my_runner.h"

void aju_player(player *_player)
{
    aju_player_position(_player);
    aju_player_shadows(_player);
    aju_player_event(_player);
    aju_player_hitbox(_player);
    aju_player_animation(_player);
}