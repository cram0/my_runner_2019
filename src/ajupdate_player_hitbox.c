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
        case RUNNING: _player->hitbox = (sfIntRect){_player->pos.x + 27 * SCALE_FACTOR,
        _player->pos.y + 10 * SCALE_FACTOR, 11 * SCALE_FACTOR, 35 * SCALE_FACTOR};
            break;
        case JUMPING: _player->hitbox = (sfIntRect){_player->pos.x + 27 * SCALE_FACTOR,
        _player->pos.y + 10 * SCALE_FACTOR, 11 * SCALE_FACTOR, 21 * SCALE_FACTOR};
            break;
        case CROUCH: _player->hitbox = (sfIntRect){_player->pos.x + 27 * SCALE_FACTOR,
        _player->pos.y + 30 * SCALE_FACTOR, 15 * SCALE_FACTOR, 19 * SCALE_FACTOR};
            break;
        case FALLING: _player->hitbox = (sfIntRect){_player->pos.x + 27 * SCALE_FACTOR,
        _player->pos.y + 13 * SCALE_FACTOR, 11 * SCALE_FACTOR, 16 * SCALE_FACTOR};
            break;
    }
}