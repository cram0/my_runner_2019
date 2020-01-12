/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_game_core
*/

#include "../include/my_runner.h"

void ajd_game_core(game_core *_game_core, sfRenderWindow *_window)
{
    if (_game_core->game_state == INGAME)
        ajd_running_scene(&_game_core->running_scene);
    if (_game_core->game_state == MENU)
        ajd_menu_scene(&_game_core->menu_scene);
    if (_game_core->game_state == GAMEOVER)
        ajd_game_over_scene(&_game_core->game_over_scene);
    sfRenderWindow_display(_window);
}