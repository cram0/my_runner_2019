/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_player
*/

#include "../include/my_runner.h"

void aju_player_hitbox(player *_player)
{
    switch (_player->state) {
        case RUNNING: _player->hitbox = (sfIntRect){_player->pos.x + 25 * 3.5,
        _player->pos.y + 10 * 3.5, 11 * 3.5, 25 * 3.5};
            break;
        case JUMPING: _player->hitbox = (sfIntRect){_player->pos.x + 25 * 3.5,
        _player->pos.y + 17 * 3.5, 11 * 3.5, 21 * 3.5};
            break;
        case CROUCH: _player->hitbox = (sfIntRect){_player->pos.x + 25 * 3.5,
        _player->pos.y + 30 * 3.5, 15 * 3.5, 19 * 3.5};
            break;
        case FALLING: _player->hitbox = (sfIntRect){_player->pos.x + 25 * 3.5,
        _player->pos.y + 17 * 3.5, 11 * 3.5, 16 * 3.5};
            break;
    }
}

void aju_player(player *_player)
{
    aju_player_position(_player);
    aju_player_event(_player);
    aju_player_hitbox(_player);
    aju_player_animation(_player);
}