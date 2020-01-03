/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aji_player_stance
*/

#include "../include/my_runner.h"

void aji_player_stance(player_stance *_stance)
{
    aji_player_stance_idle(&_stance->idling);
    aji_player_stance_running(&_stance->running);
    aji_player_stance_jumping(&_stance->jumping);
    aji_player_stance_falling(&_stance->falling);
    aji_player_stance_crouch(&_stance->crouch);
}