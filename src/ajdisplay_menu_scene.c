/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajdisplay_menu_scene
*/

#include "../include/my_runner.h"

void ajd_menu_scene(menu_scene *_scene)
{
    sfRenderWindow_drawSprite(_scene->window, _scene->background.sprite, NULL);
    sfRenderWindow_drawSprite(_scene->window, _scene->foreground.start_spr,
    NULL);
    sfRenderWindow_drawSprite(_scene->window, _scene->foreground.title_spr,
    NULL);
}