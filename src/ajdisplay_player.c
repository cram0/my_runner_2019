/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajdisplay_player
*/

#include "../include/my_runner.h"

void ajd_player(player *_player, sfRenderWindow *_window)
{
    ajd_player_shadows(_player, _window);
    sfRenderWindow_drawSprite(_window, _player->sprite, NULL);
}