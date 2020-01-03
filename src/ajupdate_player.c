/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_player
*/

#include "../include/my_runner.h"
static const float GRAVITY = 1250;

void aju_player_event(player *_player)
{
    // while (sfRenderWindow_pollEvent())
    if (sfKeyboard_isKeyPressed(sfKeySpace))
    {
        if (_player->state != JUMPING) {
            _player->state = JUMPING;
            _player->dy = -700;
        }
    }
    if (_player->pos.y >= 400)
        _player->state = IDLE;
}

void aju_player_position(player *_player)
{
    float dt = sfTime_asSeconds(sfClock_getElapsedTime(_player->move_clock));
    _player->dy = _player->dy + GRAVITY * dt;
    _player->pos.y = _player->pos.y + _player->dy * dt;
    if (_player->pos.y > 400)
        _player->pos.y = 400;
    sfSprite_setPosition(_player->sprite, _player->pos);
}

void aju_player(player *_player)
{
    aju_player_event(_player);
    aju_player_position(_player);
    sfClock_restart(_player->move_clock);
}