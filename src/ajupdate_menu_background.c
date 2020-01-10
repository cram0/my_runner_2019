/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_menu_background
*/

#include "../include/my_runner.h"

void aju_menu_background(menu_background *_bg)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(_bg->clock)) > 0.200) {
        if (_bg->rect.left >= 1280)
            _bg->rect.left = 0;
        _bg->rect.left += _bg->rect.width;
        sfSprite_setTextureRect(_bg->sprite, _bg->rect);
        sfClock_restart(_bg->clock);
    }
}