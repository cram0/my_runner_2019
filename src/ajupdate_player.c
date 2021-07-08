/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_player
*/

#include "../include/my_runner.h"

void aju_player_shadow(player *_player)
{
    if (!_player->shadow->update_clock) { _player->shadow->update_clock = sfClock_create(); }
    if (!_player->shadow->lifespan_clock) { _player->shadow->lifespan_clock = sfClock_create(); }
    int *i = &_player->shadow->shadow_idx;
    float moving_factor = sfTime_asSeconds(sfClock_restart(_player->shadow->update_clock)) * -300;

    sfColor tmp_color = sfSprite_getColor(_player->shadow->sprite[*i]);
    if (tmp_color.a >= 40) { tmp_color.a -= 40; }
    if (tmp_color.r >= 40) { tmp_color.r -= 40; }
    if (tmp_color.g >= 40) { tmp_color.g -= 40; }   

    sfSprite_setColor(_player->shadow->sprite[*i], tmp_color);
    sfSprite_move(_player->shadow->sprite[*i], (sfVector2f){moving_factor * 5, 0});

    if (sfTime_asMilliseconds(sfClock_getElapsedTime(_player->shadow->lifespan_clock)) >= 50) {
        if (_player->shadow->sprite[*i]) { sfSprite_destroy(_player->shadow->sprite[*i]);}
        _player->shadow->sprite[*i] = sfSprite_copy(_player->sprite);
        sfClock_restart(_player->shadow->lifespan_clock);
    }
    if (++(*i) == 5) { *i = 0; }
}

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

void aju_player(player *_player)
{
    aju_player_position(_player);
    aju_player_shadow(_player);
    aju_player_event(_player);
    aju_player_hitbox(_player);
    aju_player_animation(_player);
}