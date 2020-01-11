/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_player_animation1
*/

#include "../include/my_runner.h"

void aju_player_animation(player *_player)
{
    switch (_player->state) {
        case CROUCH: aju_player_animation_crouch(_player);
            break;
        case JUMPING: aju_player_animation_jumping(_player);
            break;
        case FALLING: aju_player_animation_falling(_player);
            break;
        case RUNNING: aju_player_animation_running(_player);
            break;
    }
}