/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajdisplay_enemy_list
*/

#include "../include/my_runner.h"

void ajd_enemy_list(enemy_t *_enemy, sfRenderWindow *_window, bool dbg)
{
    if (_enemy->next == NULL)
        sfRenderWindow_drawSprite(_window, _enemy->sprite, NULL);
    else {
        while (_enemy->next != NULL) {
            sfRenderWindow_drawSprite(_window, _enemy->sprite, NULL);
            if (dbg == true) {
                sfRectangleShape *dbg_hb = sfRectangleShape_create();
                sfRectangleShape_setSize(dbg_hb, (sfVector2f)
                {_enemy->hitbox.width, _enemy->hitbox.height});
                sfRectangleShape_setFillColor(dbg_hb, sfRed);
                sfRectangleShape_setPosition(dbg_hb, (sfVector2f)
                {_enemy->hitbox.left, _enemy->hitbox.top});
                sfRenderWindow_drawRectangleShape(_window, dbg_hb, NULL);
            }
            _enemy = _enemy->next;
        }
    }
}