/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_running_scene
*/

#include "../include/my_runner.h"

void aju_score(running_scene *_running_scene)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(_running_scene->clock)) >= 750) {
        _running_scene->score++;
        char score_str[100] = {'\0'};
        sprintf(score_str, "Score : %d", _running_scene->score);
        sfText_setString(_running_scene->score_text, score_str);
        sfClock_restart(_running_scene->clock);
    }
}

void aju_running_scene(running_scene *_running_scene)
{
    aju_running_scene_event(_running_scene);
    aju_parallax(&_running_scene->parallax);
    aju_player(&_running_scene->player);
    aju_enemy_list(_running_scene);
    aju_score(_running_scene);
}