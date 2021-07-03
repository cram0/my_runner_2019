/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_running_scene
*/

#include "../include/my_runner.h"

void aju_thunder(running_scene *_running_scene)
{
    thunder_t *thunder = &_running_scene->thunder;

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

void aju_running_scene(running_scene *_running_scene)
{
    aju_running_scene_event(_running_scene);
    aju_parallax(&_running_scene->parallax);
    aju_player(&_running_scene->player);
    aju_enemy_list(_running_scene);
    aju_score(_running_scene);
    aju_thunder(_running_scene);
}