/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_enemy_hitboxes
*/

#include "../include/my_runner.h"

void aju_bat_hitbox(enemy_t *_bat)
{
    _bat->hitbox.left = _bat->pos.x;
    _bat->hitbox.top = _bat->pos.y;
}

void aju_ww_hitbox(enemy_t *_ww)
{
    _ww->hitbox.left = _ww->pos.x + 25;
    _ww->hitbox.top = _ww->pos.y + 15;
}

void aju_panther_hitbox(enemy_t *_panther)
{
    _panther->hitbox.left = _panther->pos.x + 50;
    _panther->hitbox.top = _panther->pos.y + 25;

}

void aju_enemy_hitbox(enemy_t *_enemy)
{
    switch (_enemy->type) {
        case BAT: aju_bat_hitbox(_enemy);
            break;
        case WEREWOLF: aju_ww_hitbox(_enemy);
            break;
        case PANTHER: aju_panther_hitbox(_enemy);
            break;
    }
}

void aju_enemy_list_hitboxes(enemy_t *_enemy)
{
    if (_enemy->next == NULL) {
        aju_enemy_hitbox(_enemy);
    }
    else
        while (_enemy->next != NULL) {
            aju_enemy_hitbox(_enemy);
            _enemy = _enemy->next;
        }
}
