/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_item_tag
*/

#include "../include/my_runner.h"

void aju_hitbox_collision_item_type(running_scene *_scene, item_t *_item)
{
    switch (_item->type) {
        case ICE_CREAM : _scene->score += 10;
            sfSprite_setTextureRect(_scene->item_tag->sprite, (sfIntRect){0, 0, 103, 22});
            break;
        case TURKEY : _scene->score += 30;
            sfSprite_setTextureRect(_scene->item_tag->sprite, (sfIntRect){0, 22, 81, 22});
            break;
        case SHORTCAKE : _scene->score += 15;
            sfSprite_setTextureRect(_scene->item_tag->sprite, (sfIntRect){0, 44, 107, 22});
            break;
        case APPLE : _scene->score += 20;
            sfSprite_setTextureRect(_scene->item_tag->sprite, (sfIntRect){0, 66, 70, 22});
            break;
        case SPAGHETTI : _scene->score += 30;
            sfSprite_setTextureRect(_scene->item_tag->sprite, (sfIntRect){0, 88, 107, 22});
            break;
        case PARFAIT : _scene->score += 10;
            sfSprite_setTextureRect(_scene->item_tag->sprite, (sfIntRect){0, 110, 87, 22});
            break;
        default:
            break;
    }

    _scene->items->item->should_draw = false;
    _scene->item_tag->should_draw = true;
}

void aju_item_tag_clock(running_scene *_scene)
{
    if (!_scene->item_tag->duration_clock) {_scene->item_tag->duration_clock = sfClock_create(); }
    if (_scene->item_tag->should_draw) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(_scene->item_tag->duration_clock)) >= 2000) {
            _scene->item_tag->should_draw = false;
        }
    }
    else {
        sfClock_restart(_scene->item_tag->duration_clock);
    }
}