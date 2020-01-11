/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_menu_scene_event
*/

#include "../include/my_runner.h"

void aju_menu_scene_event(menu_scene *_scene)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        sfSound_play(_scene->sound_start);
        *_scene->game_state = INGAME;
    }
}