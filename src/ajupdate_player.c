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
    aju_player_event(_player);
    // if (_player->state == CROUCH)
    //     printf("CROUCH\n");
    // if (_player->state == RUNNING)
    //     printf("RUNNING\n");
    // if (_player->state == JUMPING)
    //     printf("JUMPING\n");
    // if (_player->state == FALLING)
    //     printf("FALLING\n");
    aju_player_animation(_player);
}