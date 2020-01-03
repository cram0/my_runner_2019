/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aji_player_stance2
*/

#include "../include/my_runner.h"

static const char PATH_IDLE[] = "img/alucard/alucard_idle.png";
static const char PATH_RUNNING[] = "img/alucard/alucard_running.png";
static const char PATH_CROUCH[] = "img/alucard/alucard_crouch.png";
static const char PATH_JUMPING[] = "img/alucard/alucard_jump.png";
static const char PATH_FALLING[] = "img/alucard/alucard_falling.png";

void aji_player_stance_crouch(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(PATH_CROUCH, NULL);
    _stance->sprite = sfSprite_create();
    sfIntRect temp[17] = {{0, 0, 44, 46}, {44, 6, 45, 40}, {89, 6, 42, 40},
    {131, 7, 41, 39}, {172, 9, 43, 37}, {215, 10, 43, 36}, {258, 12, 43, 34},
    {301, 14, 42, 32}, {343, 16, 41, 30}, {384, 19, 40, 27}, {424, 21, 38, 25},
    {462, 21, 37, 25}, {499, 21, 30, 25}, {529, 21, 28, 25}, {557, 14, 25, 32},
    {582, 3, 24, 43}, {606, 1, 18, 45}
    };
    _stance->rect = temp;
}

void aji_player_stance_idle(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(PATH_IDLE, NULL);
    _stance->sprite = sfSprite_create();
    sfIntRect temp[6] = {{0, 0, 23, 47}, {23, 0, 23, 47}, {46, 0, 23, 47},
    {69, 0, 23, 47}, {92, 0, 23, 47}, {115, 0, 23, 47}
    };
    _stance->rect = temp;
}

void aji_player_stance_running(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(PATH_RUNNING, NULL);
    _stance->sprite = sfSprite_create();
    sfIntRect temp[31] = {{0, 5, 21, 46}, {21, 5, 23, 46}, {44, 5, 24, 46},
    {68, 9, 31, 42}, {99, 8, 41, 43}, {140, 6, 43, 45}, {183, 8, 38, 43},
    {221, 5, 43, 46}, {264, 4, 44, 47}, {308, 3, 46, 48}, {354, 3, 47, 48},
    {401, 2, 48, 49}, {449, 0, 48, 51}, {497, 2, 46, 49}, {543, 3, 44, 48},
    {0, 53, 32, 36}, {32, 54, 30, 45}, {62, 51, 29, 48}, {91, 55, 29, 44},
    {120, 57, 29, 42}, {149, 58, 28, 41}, {177, 58, 27, 41}, {204, 55, 26, 44},
    {230, 54, 27, 45}, {257, 54, 34, 45}, {291, 54, 39, 45}, {330, 55, 37, 43},
    {367, 56, 39, 43}, {406, 56, 37, 43}, {443, 57, 39, 42}, {482, 55, 34, 44}
    };
    _stance->rect = temp;
}

void aji_player_stance_falling(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(PATH_FALLING, NULL);
    _stance->sprite = sfSprite_create();
    sfIntRect temp[14] = {{0, 17, 43, 45}, {43, 19, 44, 43}, {87, 22, 47, 40},
    {134, 23, 47, 39}, {181, 17, 45, 45}, {226, 16, 44, 46}, {270, 12, 45, 50} ,
    {315, 5, 46, 57}, {361, 0, 45, 62}, {406, 14, 45, 48}, {451, 16, 43, 46},
    {494, 17, 40, 45}, {534, 18, 36, 44}, {570, 17, 31, 45}
    };
    _stance->rect = temp;
}

void aji_player_stance_jumping(stance *_stance)
{
    _stance->texture = sfTexture_createFromFile(PATH_JUMPING, NULL);
    _stance->sprite = sfSprite_create();
    sfIntRect temp[4] = {{0, 0, 19, 48}, {19, 2, 30, 46}, {49, 5, 44, 43},
    {93, 5, 44, 43}
    };
    _stance->rect = temp;
}