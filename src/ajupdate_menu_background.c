/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_menu_background
*/

#include "../include/my_runner.h"

void aju_menu_background(menu_background *_bg)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(_bg->clock)) > 0.250) {
        if (_bg->rect.left >= 1536)
            _bg->rect.left = 0;
        sfSprite_setTextureRect(_bg->sprite, _bg->rect);
        _bg->rect.left += _bg->rect.width;
        sfClock_restart(_bg->clock);
    }
}