/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aju_running_scene_event
*/

#include "../include/my_runner.h"

void aju_running_scene_event(running_scene *_scene)
{
    if (*_scene->game_state == INGAME) {
        sfMusic_play(_scene->music);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(_scene->music);
        sfRenderWindow_close(_scene->window);
    }
}