/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_layers1
*/

#include "../include/my_runner.h"

void aji_first_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/1_layer.png", NULL);
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
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aji_second_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/2_layer.png", NULL);
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
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aji_third_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/3_layer.png", NULL);
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
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aji_fourth_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/4_layer.png", NULL);
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
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}

void aji_fifth_layer(parallax_layer *_layer)
{
    _layer->texture = sfTexture_createFromFile("img/background/5_layer.png", NULL);
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
    sfSprite_setPosition(_layer->sprite_one, (sfVector2f){_layer->pos_one.x, _layer->pos_one.x});
    sfSprite_setPosition(_layer->sprite_two, (sfVector2f){_layer->pos_two.x, _layer->pos_two.y});
}