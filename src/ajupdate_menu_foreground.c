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
        if (_fg->start_show == true) {
            sfSprite_setPosition(_fg->start_spr, (sfVector2f){1000, 1000});
            _fg->start_show = false;
        }
        if (_fg->start_show == false) {
            sfSprite_setPosition(_fg->start_spr, (sfVector2f){170, 600});
            _fg->start_show = true;
        }
        sfClock_restart(_fg->start_clock);
    }
}