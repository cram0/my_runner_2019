/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_layers
*/

#include "../include/my_runner.h"

void aju_seventh_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= 450 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= 450 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = _layer->pos_one.x + 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}