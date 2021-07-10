/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_menu_background
*/

#include "../include/my_runner.h"

void aji_menu_background(menu_background *_bg)
{
    _bg->clock = sfClock_create();
    _bg->sprite = sfSprite_create();
    _bg->texture = sfTexture_createFromFile("img/background/menu.png", NULL);
    _bg->rect = (sfIntRect){0, 0, 256, 141};
    sfSprite_setTexture(_bg->sprite, _bg->texture, sfTrue);
    sfSprite_setTextureRect(_bg->sprite, _bg->rect);
    sfSprite_setPosition(_bg->sprite, (sfVector2f){0, 0});
    sfSprite_setScale(_bg->sprite, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR * 1.7});
}