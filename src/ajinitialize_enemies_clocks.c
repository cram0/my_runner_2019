/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aji_enemies_clocks
*/

#include "../include/my_runner.h"

void aji_enemies_clocks(enemies_clocks *_clocks)
{
    _clocks->move_clock = sfClock_create();
    _clocks->anim_clock = sfClock_create();
}