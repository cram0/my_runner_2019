/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitialize_layers1
*/

#include "../include/my_runner.h"

void ajinitialize_first_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/1_layer.png", NULL);
    _layer->sprite = sfSprite_create();
    _layer->x = 0;
    _layer->y = 0;
    sfSprite_setTexture(_layer->sprite, _layer->texture, sfTrue);
    sfSprite_setPosition(_layer->sprite, (sfVector2f){_layer->x, _layer->y});
    sfSprite_setScale(_layer->sprite, (sfVector2f){3.5, 3.5});
}

void ajinitialize_second_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/2_layer.png", NULL);
    _layer->sprite = sfSprite_create();
    _layer->x = 0;
    _layer->y = 0;
    sfSprite_setTexture(_layer->sprite, _layer->texture, sfTrue);
    sfSprite_setPosition(_layer->sprite, (sfVector2f){_layer->x, _layer->y});
    sfSprite_setScale(_layer->sprite, (sfVector2f){3.5, 3.5});
}

void ajinitialize_third_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/3_layer.png", NULL);
    _layer->sprite = sfSprite_create();
    _layer->x = 0;
    _layer->y = 0;
    sfSprite_setTexture(_layer->sprite, _layer->texture, sfTrue);
    sfSprite_setPosition(_layer->sprite, (sfVector2f){_layer->x, _layer->y});
    sfSprite_setScale(_layer->sprite, (sfVector2f){3.5, 3.5});
}

void ajinitialize_fourth_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/4_layer.png", NULL);
    _layer->sprite = sfSprite_create();
    _layer->x = 0;
    _layer->y = 0;
    sfSprite_setTexture(_layer->sprite, _layer->texture, sfTrue);
    sfSprite_setPosition(_layer->sprite, (sfVector2f){_layer->x, _layer->y});
    sfSprite_setScale(_layer->sprite, (sfVector2f){3.5, 3.5});
}

void ajinitialize_fifth_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/5_layer.png", NULL);
    _layer->sprite = sfSprite_create();
    _layer->x = 0;
    _layer->y = 0;
    sfSprite_setTexture(_layer->sprite, _layer->texture, sfTrue);
    sfSprite_setPosition(_layer->sprite, (sfVector2f){_layer->x, _layer->y});
    sfSprite_setScale(_layer->sprite, (sfVector2f){3.5, 3.5});
}