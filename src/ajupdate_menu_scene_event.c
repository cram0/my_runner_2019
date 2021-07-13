/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_menu_scene_event
*/

#include "../include/my_runner.h"

void aju_menu_scene_event(menu_scene *_scene)
{
    if (*_scene->game_state == MENU) {
        if (sfMusic_getStatus(_scene->music) != sfPlaying)
            sfMusic_play(_scene->music);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        sfMusic_stop(_scene->music);
        sfSound_play(_scene->sound_start);
        *_scene->game_state = INGAME;
    }
    if (sfKeyboard_isKeyPressed(sfKeyP)) {
        sfSound_play(_scene->sound_start);
        *_scene->game_state = OPTION;
    }
}