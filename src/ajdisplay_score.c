/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajdisplay_score
*/

#include "../include/my_runner.h"

void ajd_score(running_scene *_running_scene)
{
    sfRenderWindow_drawText(_running_scene->window, _running_scene->score_text, NULL);
}