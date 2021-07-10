/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_enemy_pos
*/

#include "../include/my_runner.h"

void aju_enemy_pos(enemy_t *_enemy, enemies_clocks *_clocks)
{
    switch (_enemy->type) {
        case BAT: _enemy->pos.x -= (128.571428571 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime
            (_clocks->move_clock));
            break;
        case WEREWOLF:_enemy->pos.x -= (142.857142857 * SCALE_FACTOR) * sfTime_asSeconds
            (sfClock_getElapsedTime
            (_clocks->move_clock));
            break;
        case PANTHER: _enemy->pos.x -= (200 * SCALE_FACTOR) * sfTime_asSeconds
            (sfClock_getElapsedTime
            (_clocks->move_clock));
            break;
    }
    sfSprite_setPosition(_enemy->sprite, _enemy->pos);
}

void aju_enemy_list_pos(enemy_t *_enemy, enemies_clocks *_clocks)
{
    if (_enemy->next == NULL) {
        if (_enemy->pos.x <= -(85.714285714 * SCALE_FACTOR))
            _enemy->pos.x = -(85.714285714 * SCALE_FACTOR);
        aju_enemy_pos(_enemy, _clocks);
    }
    else
        while (_enemy->next != NULL) {
            if (_enemy->pos.x <= -(85.714285714 * SCALE_FACTOR))
                _enemy->pos.x = -(85.714285714 * SCALE_FACTOR);
            aju_enemy_pos(_enemy, _clocks);
            _enemy = _enemy->next;
        }
}
