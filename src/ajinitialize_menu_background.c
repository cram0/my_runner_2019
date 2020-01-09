/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_menu_background
*/

#include "../include/my_runner.h"

void aji_menu_background(menu_background *_bg)
{
    _bg->sprite = sfSprite_create();
    _bg->texture = sfTexture_createFromFile("...", NULL);
    _bg->rect = (sfIntRect){0, 0, 256, 141};
    sfSprite_setTexture(_bg->sprite, _bg->texture, sfTrue);
    sfSprite_setTextureRect(_bg->sprite, _bg->rect);
}