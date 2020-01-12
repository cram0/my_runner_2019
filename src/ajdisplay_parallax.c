/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_parallax
*/

#include "../include/my_runner.h"

void ajd_parallax(parallax *_parallax, sfRenderWindow *_window)
{
    sfRenderWindow_drawSprite(_window, _parallax->first_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_window, _parallax->first_layer.sprite_two, NULL);
    sfRenderWindow_drawSprite(_window, _parallax->second_layer.sprite_one, NULL)
    ;
    sfRenderWindow_drawSprite(_window, _parallax->second_layer.sprite_two, NULL)
    ;
    sfRenderWindow_drawSprite(_window, _parallax->third_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_window, _parallax->third_layer.sprite_two, NULL);
    sfRenderWindow_drawSprite(_window, _parallax->fourth_layer.sprite_one, NULL)
    ;
    sfRenderWindow_drawSprite(_window, _parallax->fourth_layer.sprite_two, NULL)
    ;
    sfRenderWindow_drawSprite(_window, _parallax->fifth_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_window, _parallax->fifth_layer.sprite_two, NULL);
    sfRenderWindow_drawSprite(_window, _parallax->sixth_layer.sprite_one, NULL);
    sfRenderWindow_drawSprite(_window, _parallax->sixth_layer.sprite_two, NULL);
}