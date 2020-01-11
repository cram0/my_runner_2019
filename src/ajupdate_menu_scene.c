/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_menu_scene
*/

#include "../include/my_runner.h"

void aju_menu_scene(menu_scene *_scene)
{
    aju_menu_scene_event(_scene);
    aju_menu_background(&_scene->background);
    aju_menu_foreground(&_scene->foreground);
    printf("time : %f\n", sfTime_asSeconds(sfClock_getElapsedTime(_scene->foreground.start_clock)));
}