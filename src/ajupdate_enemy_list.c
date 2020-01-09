/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aju_enemy_list
*/

#include "../include/my_runner.h"

void reset_enemies_clocks(enemies_clocks *_clocks)
{
    sfClock_restart(_clocks->move_clock);
    sfClock_restart(_clocks->anim_clock);   
}

void aju_enemy_list_pos(enemy_t *_enemy, enemies_clocks *_clocks)
{
    while (_enemy->previous != NULL)
        _enemy = _enemy->previous;
    if (_enemy->next == NULL) {
        if (_enemy->pos.x <= -300)
            _enemy->pos.x = -300;
        _enemy->pos.x -= 300 * sfTime_asSeconds(sfClock_getElapsedTime(_clocks->move_clock));
        sfSprite_setPosition(_enemy->sprite, _enemy->pos);
    }
    else {
        while (_enemy->next != NULL) {
            if (_enemy->pos.x <= -300)
                _enemy->pos.x = -300;
            _enemy->pos.x -= 300 * sfTime_asSeconds(sfClock_getElapsedTime(_clocks->move_clock));
            _enemy = _enemy->next;
            sfSprite_setPosition(_enemy->sprite, _enemy->pos);
        }
    }
}

void aju_enemy_list(running_scene *_scene)
{
    aju_enemy_list_pos(_scene->enemies, &_scene->clocks);
    reset_enemies_clocks(&_scene->clocks);
}