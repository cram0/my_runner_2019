/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_running_scene
*/

#include "../include/my_runner.h"

void ajd_score(running_scene *_running_scene)
{
    sfRenderWindow_drawText(_running_scene->window, _running_scene->score_text, NULL);
}

void ajd_running_scene(running_scene *_running_scene)
{
    ajd_parallax(&_running_scene->parallax, _running_scene->window);
    ajd_player(&_running_scene->player, _running_scene->window);
    ajd_enemy_list(_running_scene->enemies, _running_scene->window,
    _running_scene->debug);
    if (_running_scene->debug == true) {
        ajd_dbg_player_hitbox(_running_scene);
    }
    ajd_score(_running_scene);
}