/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_enemy_list_stats
*/

#include "../include/my_runner.h"

sfTexture *fill_enemy_texture(int enemy_type, enemy_types_text *_types)
{
    switch (enemy_type) {
        case BAT: return (_types->bat_texture);
            break;
        case WEREWOLF: return (_types->werewolf_texture);
            break;
        case PANTHER: return (_types->panther_texture);
            break;
        default: return (_types->panther_texture);
    }
}

sfIntRect fill_enemy_rect(int enemy_type)
{
    switch (enemy_type) {
        case BAT: return ((sfIntRect){0, 0, 16, 29});
            break;
        case WEREWOLF: return ((sfIntRect){0, 0, 28, 48});
            break;
        case PANTHER: return ((sfIntRect){0, 0, 61, 26});
            break;
        default: return ((sfIntRect){0, 0, 0, 0});
    }
}

sfVector2f fill_enemy_pos(int enemy_type)
{
    switch (enemy_type) {
        case BAT: return ((sfVector2f){0, 315});
            break;
        case WEREWOLF: return ((sfVector2f){0, 367});
            break;
        case PANTHER: return ((sfVector2f){0, 435});
            break;
        default: return ((sfVector2f){0, 0});
    }
}

sfIntRect fill_enemy_hitbox(int enemy_type)
{
    switch (enemy_type) {
        case BAT: return ((sfIntRect){0, 0, 10 * 3.5, 24 * 3.5});
            break;
        case WEREWOLF: return ((sfIntRect){5, 11, 15 * 3.5, 35 * 3.5});
            break;
        case PANTHER: return ((sfIntRect){3, 4, 35 * 3.5, 10 * 3.5});
            break;
        default: return ((sfIntRect){0, 0, 16 * 3.5, 29 * 3.5});
    }
}

int fill_enemy_type(int enemy_id)
{
    switch (enemy_id) {
        case BAT: return (BAT);
            break;
        case WEREWOLF: return (WEREWOLF);
            break;
        case PANTHER: return (PANTHER);
            break;
        default: return (0);
    }
}