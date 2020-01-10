/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aju_game_core
*/

#include "../include/my_runner.h"

void aju_game_core(game_core *_game_core)
{
    while (sfRenderWindow_pollEvent(_game_core->window, &_game_core->event)) {
        if (_game_core->event.type == sfEvtClosed)
            sfRenderWindow_close(_game_core->window);
    }
    switch (_game_core->game_state) {
    case MENU: aju_menu_scene(&_game_core->menu_scene);
        break;
    case INGAME: aju_running_scene(&_game_core->running_scene);
        break;
    }
}