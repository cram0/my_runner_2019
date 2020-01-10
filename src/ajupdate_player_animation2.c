/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_player_animation2
*/

#include "../include/my_runner.h"

void aju_player_animation_idle(player *_player)
{

    if (sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock)) > 0.110) {
        if (_player->stance_anim.idling.rect.left ==
        _player->stance_anim.idling.rect.width * 5)
            _player->stance_anim.idling.rect.left = 0;
        sfSprite_setTextureRect(_player->sprite,
        _player->stance_anim.idling.rect);
        _player->stance_anim.idling.rect.left +=
        _player->stance_anim.idling.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation_jumping(player *_player)
{

    if (sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock)) > 0.100) {
        if (_player->stance_anim.jumping.rect.left ==
        _player->stance_anim.jumping.rect.width * 4)
            _player->stance_anim.jumping.rect.left =
            _player->stance_anim.jumping.rect.width * 3;
        sfSprite_setTextureRect(_player->sprite,
        _player->stance_anim.jumping.rect);
        _player->stance_anim.jumping.rect.left +=
        _player->stance_anim.jumping.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation_falling(player *_player)
{

    if (sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock)) > 0.070) {
        if (_player->stance_anim.falling.rect.left == 329){
            _player->stance_anim.falling.rect.left = 282;
        }
        sfSprite_setTextureRect(_player->sprite,
        _player->stance_anim.falling.rect);
        _player->stance_anim.falling.rect.left +=
        _player->stance_anim.falling.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation_running(player *_player)
{

    if (sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock)) > 0.050) {
        if ((_player->stance_anim.running.rect.left == 720 &&
        _player->stance_anim.running.rect.top == 0) ||
        _player->stance_anim.running.rect.left == 768){
            _player->stance_anim.running.rect.left = 0;
            _player->stance_anim.running.rect.top = 51;
        }
        sfSprite_setTextureRect(_player->sprite,
        _player->stance_anim.running.rect);
        _player->stance_anim.running.rect.left +=
        _player->stance_anim.running.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation_crouch(player *_player)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock)) > 0.070) {
        if (_player->stance_anim.crouch.rect.left == 540){
            _player->stance_anim.crouch.rect.left = 495;
        }
        sfSprite_setTextureRect(_player->sprite,
        _player->stance_anim.crouch.rect);
        _player->stance_anim.crouch.rect.left +=
        _player->stance_anim.crouch.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}