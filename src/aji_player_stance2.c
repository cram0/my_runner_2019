/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aji_player_stance2
*/

#include "../include/my_runner.h"

static const char IDLE[] = "img/alucard/alucard_idle.png";
static const char RUNNING[] = "img/alucard/alucard_running.png";
static const char CROUCH[] = "img/alucard/alucard_crouch.png";
static const char JUMPING[] = "img/alucard/alucard_jump.png";
static const char FALLING[] = "img/alucard/alucard_falling.png";

void aji_player_stance_crouch(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(CROUCH, NULL);
    _stance->sprite = sfSprite_create();
    _stance->rect = aji_player_stance_crouch_array();
}

void aji_player_stance_idle(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(IDLE, NULL);
    _stance->sprite = sfSprite_create();
    _stance->rect = aji_player_stance_idle_array();
}

void aji_player_stance_running(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(RUNNING, NULL);
    _stance->sprite = sfSprite_create();
    _stance->rect = aji_player_stance_running_array();
}

void aji_player_stance_falling(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(FALLING, NULL);
    _stance->sprite = sfSprite_create();
    _stance->rect = aji_player_stance_falling_array();
}

void aji_player_stance_jumping(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(JUMPING, NULL);
    _stance->sprite = sfSprite_create();
    _stance->rect = aji_player_stance_jumping_array();
}