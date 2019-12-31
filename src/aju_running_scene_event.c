/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aju_running_scene_event
*/

#include "../include/my_runner.h"

void aju_running_scene_event(running_scene *_scene)
{
    while (sfRenderWindow_pollEvent(_scene->window, &_scene->event)) {
            if (_scene->event.type == sfEvtClosed)
                sfRenderWindow_close(_scene->window);
        }
}