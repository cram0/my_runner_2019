/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_running_scene
*/

#include "../include/my_runner.h"

void ajd_thunder(running_scene *_running_scene)
{
    thunder_t *thunder = &_running_scene->thunder;

    if (thunder->is_detonating) {
        sfRenderWindow_drawSprite(_running_scene->window, thunder->sprite, NULL);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(thunder->thunder_clock)) >= 750) {
            thunder->is_detonating = false;
            sfClock_restart(thunder->thunder_clock);
        }
    }
}

void ajd_running_scene(running_scene *_running_scene)
{
    ajd_parallax_thunder(_running_scene);
    ajd_player(&_running_scene->player, _running_scene->window);
    ajd_enemy_list(_running_scene->enemies, _running_scene->window, _running_scene->debug);
    if (_running_scene->debug == true) {
        ajd_dbg_player_hitbox(_running_scene);
    }
    ajd_score(_running_scene);
}