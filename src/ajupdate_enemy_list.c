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
}

void aju_enemy_list(running_scene *_scene)
{
    aju_enemy_list_pos(_scene->enemies, &_scene->clocks);
    aju_enemy_list_anims(_scene->enemies);
    reset_enemies_clocks(&_scene->clocks);
}