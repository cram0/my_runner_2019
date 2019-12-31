/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_layers
*/

#include "../include/my_runner.h"

void aju_second_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 0.5;
    _layer->pos_two.x -= 0.5;
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_third_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 1.5;
    _layer->pos_two.x -= 1.5;
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_fourth_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 2.5;
    _layer->pos_two.x -= 2.5;
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_fifth_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 3.5;
    _layer->pos_two.x -= 3.5;
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aju_sixth_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 4.5;
    _layer->pos_two.x -= 4.5;
    if (_layer->pos_one.x <= -896)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x <= -896)
        _layer->pos_two.x = 896;
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.y});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}