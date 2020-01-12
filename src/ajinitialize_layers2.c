/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitalize_layers2
*/

#include "../include/my_runner.h"

void aji_sixth_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/6_layer.png",
    NULL);
    _layer->sprite_one = sfSprite_create();
    _layer->sprite_two = sfSprite_create();
    _layer->pos_one.x = 0;
    _layer->pos_one.y = 0;
    _layer->pos_two.x = 896;
    _layer->pos_two.y = 0;
    sfSprite_setTexture(_layer->sprite_one, _layer->texture, sfTrue);
    sfSprite_setTexture(_layer->sprite_two, _layer->texture, sfTrue);
    sfSprite_setScale(_layer->sprite_one, (sfVector2f){3.5, 3.5});
    sfSprite_setScale(_layer->sprite_two, (sfVector2f){3.5, 3.5});
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}