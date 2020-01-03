/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitialize_player
*/

#include "../include/my_runner.h"

void aji_player(player *_player)
{
    aji_player_stance(&_player->stance_anim);
    _player->anim_clock = sfClock_create();
    _player->sprite = sfSprite_create();
    _player->pos.x = 0;
    _player->pos.y = 0;
    _player->state = IDLE;
}