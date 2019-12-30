/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_layers2
*/

#include "../include/my_runner.h"

void aju_sixth_layer(parallax_layer *_layer)
{
    _layer->pos_one.x -= 6;
    _layer->pos_two.x -= 6;
    if (_layer->pos_one.x < 0)
        _layer->pos_one.x = 896;
    if (_layer->pos_two.x < 0)
        _layer->pos_two.x = 896;
}