/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_running_scene
*/

#include "../include/my_runner.h"

void ajd_running_scene(running_scene *_running_scene)
{
    ajd_parallax(&_running_scene->parallax, _running_scene->window);
    ajd_player(&_running_scene->player, _running_scene->window);
    ajd_enemy_list(_running_scene->enemies, _running_scene->window);
    // PLAYER HITBOX //
    sfRectangleShape *dbg_hb = sfRectangleShape_create();
    sfRectangleShape_setSize(dbg_hb, (sfVector2f){_running_scene->player.hitbox.width, _running_scene->player.hitbox.height});
    sfRectangleShape_setFillColor(dbg_hb, sfRed);
    sfRectangleShape_setPosition(dbg_hb, (sfVector2f){_running_scene->player.hitbox.left, _running_scene->player.hitbox.top});
    sfRenderWindow_drawRectangleShape(_running_scene->window, dbg_hb, NULL);
    //              //
}