/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitialize_player
*/

#include "../include/my_runner.h"

void aji_player(player *_player)
{
    aji_player_stance(&_player->stance);
    _player->anim_clock = sfClock_create();

}