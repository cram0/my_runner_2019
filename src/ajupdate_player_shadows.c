/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_player_shadows
*/

#include "../include/my_runner.h"

void aju_player_shadows(player *_player)
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
