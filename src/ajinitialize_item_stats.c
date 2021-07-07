/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajinitialize_item_stats
*/

#include "../include/my_runner.h"

void fill_item_texture(sfSprite *sprite, sfTexture *texture, int item_id)
{
    sfSprite_setTexture(sprite, texture, sfFalse);

    switch (item_id) {
        case ICE_CREAM : sfSprite_setTextureRect(sprite, (sfIntRect){0, 0, 13, 17});
            break;
        case TURKEY : sfSprite_setTextureRect(sprite, (sfIntRect){14, 2, 19, 15});
            break;
        case SHORTCAKE : sfSprite_setTextureRect(sprite, (sfIntRect){34, 4, 13, 13});
            break;
        case APPLE : sfSprite_setTextureRect(sprite, (sfIntRect){48, 8, 9, 9});
            break;
        case SPAGHETTI : sfSprite_setTextureRect(sprite, (sfIntRect){58, 1, 22, 16});
            break;
        case PARFAIT : sfSprite_setTextureRect(sprite, (sfIntRect){82, 0, 11, 17});
            break;
        default:
            break;
    }
}

sfIntRect fill_item_hitbox(int item_id)
{
    switch (item_id) {
        case ICE_CREAM :
            return ((sfIntRect){0, 0, 13 * 3.5, 17 * 3.5});
        case TURKEY :
            return ((sfIntRect){0, 0, 19 * 3.5, 15 * 3.5});
        case SHORTCAKE :
            return ((sfIntRect){0, 0, 13 * 3.5, 13 * 3.5});
        case APPLE :
            return ((sfIntRect){0, 0, 9 * 3.5, 9 * 3.5});
        case SPAGHETTI :
            return ((sfIntRect){0, 0, 22 * 3.5, 16 * 3.5});
        case PARFAIT :
            return ((sfIntRect){0, 0, 11 * 3.5, 17 * 3.5});
        default:
            return ((sfIntRect){0, 0, 0, 0});
    }
}

int fill_item_type(int item_id)
{
    return (item_id);
}

sfVector2f fill_item_pos(int item_id)
{
    switch (item_id) {
        case ICE_CREAM :
            return ((sfVector2f){1000, 476});
        case TURKEY :
            return ((sfVector2f){1000, 483});
        case SHORTCAKE :
            return ((sfVector2f){1000, 490});
        case APPLE :
            return ((sfVector2f){1000, 504});
        case SPAGHETTI :
            return ((sfVector2f){1000, 480});
        case PARFAIT :
            return ((sfVector2f){1000, 476});
        default :
            return ((sfVector2f){1000, 600});
    }
}