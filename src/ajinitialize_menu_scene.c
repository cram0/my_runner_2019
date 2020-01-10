/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_menu_scene
*/

#include "../include/my_runner.h"

void aji_menu_scene(menu_scene *_scene, sfRenderWindow *_window)
{
    _scene->window = _window;
    aji_menu_background(&_scene->background);
    aji_menu_foreground(&_scene->foreground);
}