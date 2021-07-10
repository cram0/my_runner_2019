/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_menu_foreground
*/

#include "../include/my_runner.h"

void aju_menu_foreground(menu_foreground *_fg)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(_fg->start_clock)) > 0.800) {
        if (_fg->start_show == false) {
            sfSprite_setPosition(_fg->start_spr, (sfVector2f){48.571428571 * SCALE_FACTOR, 171.428571429 * SCALE_FACTOR});
            _fg->start_show = true;
        }
        else {
            sfSprite_setPosition(_fg->start_spr, (sfVector2f){285.714285714 * SCALE_FACTOR, 285.714285714 * SCALE_FACTOR});
            _fg->start_show = false;
        }
        sfClock_restart(_fg->start_clock);
    }
}