/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_player_hitbox
*/

#include "../include/my_runner.h"

void aju_player_hitbox(player *_player)
{
    switch (_player->state) {
        case RUNNING: _player->hitbox = (sfIntRect){_player->pos.x + 27 * 3.5,
        _player->pos.y + 10 * 3.5, 11 * 3.5, 35 * 3.5};
            break;
        case JUMPING: _player->hitbox = (sfIntRect){_player->pos.x + 27 * 3.5,
        _player->pos.y + 10 * 3.5, 11 * 3.5, 21 * 3.5};
            break;
        case CROUCH: _player->hitbox = (sfIntRect){_player->pos.x + 27 * 3.5,
        _player->pos.y + 30 * 3.5, 15 * 3.5, 19 * 3.5};
            break;
        case FALLING: _player->hitbox = (sfIntRect){_player->pos.x + 27 * 3.5,
        _player->pos.y + 13 * 3.5, 11 * 3.5, 16 * 3.5};
            break;
    }
}