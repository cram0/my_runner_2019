/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitalize_layers2
*/

#include "../include/my_runner.h"

void aji_sixth_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/6_layer.png", NULL);
    _layer->sprite = sfSprite_create();
    _layer->x = 0;
    _layer->y = 0;
    sfSprite_setTexture(_layer->sprite, _layer->texture, sfTrue);
    sfSprite_setPosition(_layer->sprite, (sfVector2f){_layer->x, _layer->y});
    sfSprite_setScale(_layer->sprite, (sfVector2f){3.5, 3.5});
}