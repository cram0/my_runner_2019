/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_layers
*/

#include "../include/my_runner.h"

void aju_first_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 1;
    _layer->pos_two.x -= 1;
    if (_layer->pos_one.x < 0)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x < 0)
        _layer->pos_two.x = 896;
}

void aju_second_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 2;
    _layer->pos_two.x -= 2;
    if (_layer->pos_one.x < 0)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x < 0)
        _layer->pos_two.x = 896;
}

void aju_third_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 3;
    _layer->pos_two.x -= 3;
    if (_layer->pos_one.x < 0)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x < 0)
        _layer->pos_two.x = 896;
}

void aju_fourth_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 4;
    _layer->pos_two.x -= 4;
    if (_layer->pos_one.x < 0)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x < 0)
        _layer->pos_two.x = 896;
}

void aju_fifth_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 5;
    _layer->pos_two.x -= 5;
    if (_layer->pos_one.x < 0)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x < 0)
        _layer->pos_two.x = 896;
}