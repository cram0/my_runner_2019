/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajdisplay_thunder
*/

#include "../include/my_runner.h"

void ajd_thunder(running_scene *_running_scene)
{
    thunder_t *thunder = &_running_scene->thunder;

    if (thunder->is_detonating) {
        sfRenderWindow_drawSprite(_running_scene->window, thunder->sprite, NULL);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(thunder->thunder_clock)) >= 500) {
            thunder->is_detonating = false;
            sfClock_restart(thunder->thunder_clock);
        }
    }
    else {
        sfClock_restart(thunder->thunder_clock);
    }
}