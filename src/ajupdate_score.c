/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_score
*/

#include "../include/my_runner.h"

void aju_score(running_scene *_running_scene)
{
    if (!_running_scene->clock) { _running_scene->clock = sfClock_create(); }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(_running_scene->clock)) >= 750) {
        _running_scene->score++;
        sfClock_restart(_running_scene->clock);
    }
}