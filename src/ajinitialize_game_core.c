/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_game_core
*/

#include "../include/my_runner.h"

void aji_game_core(game_core *_game_core, sfRenderWindow *_window)
{
    _game_core->window = _window;
    _game_core->state = INGAME;
    aji_running_scene(&_game_core->running_scene, _window);
}