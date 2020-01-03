/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_running_scene
*/

#include "../include/my_runner.h"

void ajd_running_scene(running_scene *_running_scene)
{
    ajd_parallax(&_running_scene->parallax, _running_scene->window);
    ajd_player(&_running_scene->player, _running_scene->window);
}