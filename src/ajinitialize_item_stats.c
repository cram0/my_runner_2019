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
            return ((sfIntRect){0, 0, 13 * SCALE_FACTOR, 17 * SCALE_FACTOR});
        case TURKEY :
            return ((sfIntRect){0, 0, 19 * SCALE_FACTOR, 15 * SCALE_FACTOR});
        case SHORTCAKE :
            return ((sfIntRect){0, 0, 13 * SCALE_FACTOR, 13 * SCALE_FACTOR});
        case APPLE :
            return ((sfIntRect){0, 0, 9 * SCALE_FACTOR, 9 * SCALE_FACTOR});
        case SPAGHETTI :
            return ((sfIntRect){0, 0, 22 * SCALE_FACTOR, 16 * SCALE_FACTOR});
        case PARFAIT :
            return ((sfIntRect){0, 0, 11 * SCALE_FACTOR, 17 * SCALE_FACTOR});
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
            return ((sfVector2f){285.714285714 * SCALE_FACTOR, 136 * SCALE_FACTOR});
        case TURKEY :
            return ((sfVector2f){285.714285714 * SCALE_FACTOR, 138 * SCALE_FACTOR});
        case SHORTCAKE :
            return ((sfVector2f){285.714285714 * SCALE_FACTOR, 140 * SCALE_FACTOR});
        case APPLE :
            return ((sfVector2f){285.714285714 * SCALE_FACTOR, 144 * SCALE_FACTOR});
        case SPAGHETTI :
            return ((sfVector2f){285.714285714 * SCALE_FACTOR, 137 * SCALE_FACTOR});
        case PARFAIT :
            return ((sfVector2f){285.714285714 * SCALE_FACTOR, 136 * SCALE_FACTOR});
        default :
            return ((sfVector2f){285.714285714 * SCALE_FACTOR, 172 * SCALE_FACTOR});
    }
}