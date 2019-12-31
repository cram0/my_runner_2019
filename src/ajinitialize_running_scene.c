/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_running_scene
*/

#include "../include/my_runner.h"

void aji_running_scene(running_scene *_running_scene, sfRenderWindow *_window)
{
    _running_scene->window = _window;
    aji_player(&_running_scene->player);
    aji_parallax(&_running_scene->parallax);
}