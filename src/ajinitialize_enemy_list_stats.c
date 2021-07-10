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
        case BAT: return ((sfVector2f){428.571428571 * SCALE_FACTOR, 90 * SCALE_FACTOR});
            break;
        case WEREWOLF: return ((sfVector2f){428.571428571 * SCALE_FACTOR, 104.857142857 * SCALE_FACTOR});
            break;
        case PANTHER: return ((sfVector2f){428.571428571 * SCALE_FACTOR, 124.285714286 * SCALE_FACTOR});
            break;
        default: return ((sfVector2f){428.571428571 * SCALE_FACTOR, 0 * SCALE_FACTOR});
    }
}

sfIntRect fill_enemy_hitbox(int enemy_type)
{
    switch (enemy_type) {
        case BAT: return ((sfIntRect){0 * SCALE_FACTOR, 0 * SCALE_FACTOR, 10 * SCALE_FACTOR, 18 * SCALE_FACTOR});
            break;
        case WEREWOLF: return ((sfIntRect){1.428571429 * SCALE_FACTOR, 3.142857143 * SCALE_FACTOR, 12 * SCALE_FACTOR, 35 * SCALE_FACTOR});
            break;
        case PANTHER: return ((sfIntRect){0.857142857 * SCALE_FACTOR, 1.142857143 * SCALE_FACTOR, 35 * SCALE_FACTOR, 10 * SCALE_FACTOR});
            break;
        default: return ((sfIntRect){0 * SCALE_FACTOR, 0 * SCALE_FACTOR, 16 * SCALE_FACTOR, 29 * SCALE_FACTOR});
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