/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aju_game_core
*/

#include "../include/my_runner.h"

void aju_game_core(game_core *_game_core)
{
    if (_game_core->game_state == INGAME)
        aju_running_scene(&_game_core->running_scene);
}