/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_score
*/

#include "../include/my_runner.h"

void aju_score(running_scene *_running_scene)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(_running_scene->clock)) >= 750) {
        _running_scene->score++;
        char score_str[100] = {'\0'};
        sprintf(score_str, "Score \n %d", _running_scene->score);
        sfText_setString(_running_scene->score_text, score_str);
        sfClock_restart(_running_scene->clock);
    }
}