/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_game_core
*/

#include "../include/my_runner.h"

void aji_game_core(game_core *_game_core, char *map)
{
    sfRenderWindow *window = sfRenderWindow_create((sfVideoMode){896, 840, 32},
    "Alucard's Journey", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 120);
    _game_core->window = window;
    _game_core->game_state = MENU;
    _game_core->menu_scene.game_state = malloc(sizeof(int));
    _game_core->running_scene.game_state = malloc(sizeof(int));
    _game_core->menu_scene.game_state = &_game_core->game_state;
    _game_core->running_scene.game_state = &_game_core->game_state;
    aji_game_over_scene(&_game_core->game_over_scene, _game_core->window);
    aji_menu_scene(&_game_core->menu_scene, _game_core->window);
    aji_running_scene(&_game_core->running_scene, _game_core->window, map);
}