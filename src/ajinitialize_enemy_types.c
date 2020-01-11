/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_enemy_types
*/

#include "../include/my_runner.h"

void aji_enemy_types_text(enemy_types_text *_enemy_types)
{
    _enemy_types->bat_texture = sfTexture_createFromFile(
    "img/monsters/bat.png", NULL);
    _enemy_types->panther_texture = sfTexture_createFromFile(
    "img/monsters/panther.png", NULL);
    _enemy_types->werewolf_texture = sfTexture_createFromFile(
    "img/monsters/werewolf.png", NULL);
}