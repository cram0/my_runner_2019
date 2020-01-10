/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_game_core
*/

#include "../include/my_runner.h"

void ajd_game_core(game_core *_game_core, sfRenderWindow *_window)
{
    switch (_game_core->game_state) {
        case MENU: ajd_menu_scene(&_game_core->menu_scene);
            break;
        case INGAME: ajd_running_scene(&_game_core->running_scene);
            break;
    }
    sfRenderWindow_display(_window);
}