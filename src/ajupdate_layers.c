/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_layers
*/

#include "../include/my_runner.h"

void aju_second_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= 50 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= 50 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_third_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= 100 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= 100 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_fourth_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= 150 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= 150 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_fifth_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= 200 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= 200 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_sixth_layer(parallax_layer *_layer, sfClock *_clock)
{

    _layer->pos_one.x -= 300 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    _layer->pos_two.x -= 300 * sfTime_asSeconds(sfClock_getElapsedTime(_clock));
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}