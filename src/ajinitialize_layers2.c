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
    _layer->pos_one.x = 0 * SCALE_FACTOR;
    _layer->pos_one.y = 0 * SCALE_FACTOR;
    _layer->pos_two.x = 256 * SCALE_FACTOR;
    _layer->pos_two.y = 0 * SCALE_FACTOR;
    sfSprite_setTexture(_layer->sprite_one, _layer->texture, sfTrue);
    sfSprite_setTexture(_layer->sprite_two, _layer->texture, sfTrue);
    sfSprite_setScale(_layer->sprite_one, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
    sfSprite_setScale(_layer->sprite_two, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}

void aji_seventh_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/7_layer.png",
    NULL);
    _layer->sprite_one = sfSprite_create();
    _layer->sprite_two = sfSprite_create();
    _layer->pos_one.x = 0 * SCALE_FACTOR;
    _layer->pos_one.y = 0 * SCALE_FACTOR;
    _layer->pos_two.x = 256 * SCALE_FACTOR;
    _layer->pos_two.y = 0 * SCALE_FACTOR;
    sfSprite_setTexture(_layer->sprite_one, _layer->texture, sfTrue);
    sfSprite_setTexture(_layer->sprite_two, _layer->texture, sfTrue);
    sfSprite_setScale(_layer->sprite_one, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
    sfSprite_setScale(_layer->sprite_two, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x,
    _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x,
    _layer->pos_two.y});
}