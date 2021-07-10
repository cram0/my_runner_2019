/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_layers
*/

#include "../include/my_runner.h"

void aju_second_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= (14.285714286 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= (14.285714286 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= (-256 * SCALE_FACTOR))
        _layer->pos_one.x = (256 * SCALE_FACTOR);
    if (_layer->pos_two.x <= (-256 * SCALE_FACTOR))
        _layer->pos_two.x = _layer->pos_one.x + (256 * SCALE_FACTOR);
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}

void aju_third_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= (28.571428571 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= (28.571428571 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= (-256 * SCALE_FACTOR))
        _layer->pos_one.x = (256 * SCALE_FACTOR);
    if (_layer->pos_two.x <= (-256 * SCALE_FACTOR))
        _layer->pos_two.x = _layer->pos_one.x + (256 * SCALE_FACTOR);
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}

void aju_fourth_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= (42.857142857 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= (42.857142857 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= (-256 * SCALE_FACTOR))
        _layer->pos_one.x = (256 * SCALE_FACTOR);
    if (_layer->pos_two.x <= (-256 * SCALE_FACTOR))
        _layer->pos_two.x = _layer->pos_one.x + (256 * SCALE_FACTOR);
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}

void aju_fifth_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= (57.142857143 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= (57.142857143 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= (-256 * SCALE_FACTOR))
        _layer->pos_one.x = (256 * SCALE_FACTOR);
    if (_layer->pos_two.x <= (-256 * SCALE_FACTOR))
        _layer->pos_two.x = _layer->pos_one.x + (256 * SCALE_FACTOR);
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}

void aju_sixth_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= (85.714285714 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= (85.714285714 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= (-256 * SCALE_FACTOR))
        _layer->pos_one.x = (256 * SCALE_FACTOR);
    if (_layer->pos_two.x <= (-256 * SCALE_FACTOR))
        _layer->pos_two.x = _layer->pos_one.x + (256 * SCALE_FACTOR);
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}