/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajdisplay_enemy_list
*/

#include "../include/my_runner.h"

void ajd_enemy_list(enemy_t *_enemy, sfRenderWindow *_window)
{
    if (_enemy->next == NULL)
        sfRenderWindow_drawSprite(_window, _enemy->sprite, NULL);
    else {
        while (_enemy->next != NULL) {
            sfRenderWindow_drawSprite(_window, _enemy->sprite, NULL);
            _enemy = _enemy->next;
        }
    }
}