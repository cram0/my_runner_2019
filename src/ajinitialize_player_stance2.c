/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aji_player_stance2
*/

#include "../include/my_runner.h"

static const char PATH_SHEET[] = "img/alucard/alucard_sheet.png";

void aji_player_stance_crouch(stance *_stance)
{
    _stance->rect = (sfIntRect){0, 266, 45, 51};
}

void aji_player_stance_idle(stance *_stance)
{
    _stance->rect = (sfIntRect){0, 218, 23, 47};
}

void aji_player_stance_running(stance *_stance)
{
    _stance->rect = (sfIntRect){0, 0, 48, 51};
}

void aji_player_stance_falling(stance *_stance)
{
    _stance->rect = (sfIntRect){0, 104, 47, 62};
}

void aji_player_stance_jumping(stance *_stance)
{
    _stance->rect = (sfIntRect){0, 168, 44, 48};
}