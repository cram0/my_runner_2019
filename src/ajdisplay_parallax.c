/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_parallax
*/

#include "../include/my_runner.h"

void ajd_parallax_thunder(running_scene *_running_scene)
{
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.first_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.first_layer.sprite_two, NULL);

    ajd_thunder(_running_scene);

    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.second_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.second_layer.sprite_two, NULL);

    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.third_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.third_layer.sprite_two, NULL);

    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.fourth_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.fourth_layer.sprite_two, NULL);

    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.fifth_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.fifth_layer.sprite_two, NULL);

    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.sixth_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.sixth_layer.sprite_two, NULL);

    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.seventh_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_running_scene->window, _running_scene->parallax.seventh_layer.sprite_two, NULL);
}