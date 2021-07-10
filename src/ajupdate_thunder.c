/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_thunder
*/

#include "../include/my_runner.h"

void aju_thunder(running_scene *_running_scene)
{
    thunder_t *thunder = &_running_scene->thunder;
    if (!thunder->cooldown_clock) { thunder->cooldown_clock = sfClock_create();}
    if (sfTime_asSeconds(sfClock_getElapsedTime(thunder->cooldown_clock)) >= (float)thunder->time_till_next_thunder) {
        if (!thunder->is_detonating) {
            thunder->is_detonating = true;
            thunder->time_till_next_thunder = get_random_number(8, 10);
            if (sfSound_getStatus(thunder->sound) != sfPlaying)
                sfSound_play(thunder->sound);
            sfClock_restart(thunder->cooldown_clock);
        }
    }
}