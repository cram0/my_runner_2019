/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajinitialize_player_shadows
*/

#include "../include/my_runner.h"

void aji_player_shadows(player *_player)
{
    _player->shadow = malloc(sizeof(player_shadows_t));
    _player->shadow->update_clock = NULL;
    _player->shadow->shadow_idx = 0;
    _player->shadow->lifespan_clock = NULL;
    for (int i = 0; i < 5; i++) {
        _player->shadow->sprite[i] = sfSprite_create();
    }
}