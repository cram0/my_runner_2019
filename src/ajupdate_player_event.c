/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_player_event
*/

#include "../include/my_runner.h"

void aju_player_event(player *_player)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        if (_player->state != JUMPING && _player->state != FALLING) {
            _player->state = JUMPING;
            _player->stance_anim.falling.rect.left = 0;
            _player->stance_anim.jumping.rect.left = 0;
            // _player->stance_anim.running.rect.top = 0;
            _player->stance_anim.crouch.rect.left = 0;
            _player->stance_anim.running.rect.left = 192;
            _player->dy = -700;
        }
    if (sfKeyboard_isKeyPressed(sfKeyS))
        if (_player->state == RUNNING || _player->state == CROUCH) {
            _player->state = CROUCH;
            _player->stance_anim.jumping.rect.left = 0;
            _player->stance_anim.falling.rect.left = 0;
            _player->stance_anim.running.rect.left = 0;
            _player->stance_anim.running.rect.top = 0;
        }
}