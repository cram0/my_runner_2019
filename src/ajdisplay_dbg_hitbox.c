/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajdisplay_dbg
*/

#include "../include/my_runner.h"

void ajd_dbg_player_hitbox(running_scene *_scene)
{
    sfRectangleShape *dbg_hb = sfRectangleShape_create();
    sfRectangleShape_setSize(dbg_hb, (sfVector2f)
    {_scene->player.hitbox.width, _scene->player.hitbox.height})   ;
    sfRectangleShape_setFillColor(dbg_hb, sfGreen);
    sfRectangleShape_setPosition(dbg_hb, (sfVector2f)
    {_scene->player.hitbox.left, _scene->player.hitbox.top});
    sfRenderWindow_drawRectangleShape(_scene->window, dbg_hb, NULL);
}

void ajd_dbg_enemy_hitbox(running_scene *_scene)
{
    sfRectangleShape *dbg_hb = sfRectangleShape_create();
    sfRectangleShape_setSize(dbg_hb, (sfVector2f){_scene->enemies->hitbox.width,
    _scene->enemies->hitbox.height});
    sfRectangleShape_setFillColor(dbg_hb, sfRed);
    sfRectangleShape_setPosition(dbg_hb, (sfVector2f)
    {_scene->enemies->hitbox.left, _scene->enemies->hitbox.top});
    sfRenderWindow_drawRectangleShape(_scene->window, dbg_hb, NULL);
}