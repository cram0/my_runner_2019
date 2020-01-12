/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajdisplay_game_over_scene
*/

#include "../include/my_runner.h"

void ajd_game_over_scene(game_over_scene *_scene)
{
    sfRenderWindow_drawSprite(_scene->window, _scene->sprite, NULL);
}