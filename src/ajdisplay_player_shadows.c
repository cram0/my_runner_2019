/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajdisplay_player_shadows
*/

#include "../include/my_runner.h"

void ajd_player_shadows(player *_player, sfRenderWindow *_window)
{
    for (int i = ALUCARD_SHADOW_COUNT - 1; i >= 0; i--) {
        sfRenderWindow_drawSprite(_window, _player->shadow->sprite[i], NULL);
    }
}