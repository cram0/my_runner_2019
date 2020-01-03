/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_player
*/

#include "../include/my_runner.h"

void aju_player_event(player *_player)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        _player->state = JUMPING;
}

void aju_player(player *_player)
{
    aju_player_event(&_player);
}