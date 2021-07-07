/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajinitialize_item_tag
*/

#include "../include/my_runner.h"

void aji_item_tag(item_tag_t *tag)
{
    tag->sprite = sfSprite_create();
    tag->texture = sfTexture_createFromFile("img/items/food_tags.png", NULL);
    tag->should_draw = false;
    tag->duration_clock = sfClock_create();
    tag->current_tag_type = 1;
    sfSprite_setTexture(tag->sprite, tag->texture, sfFalse);
    sfSprite_setPosition(tag->sprite, (sfVector2f){45, 720});
    sfSprite_setScale(tag->sprite, (sfVector2f){3.5, 3.5});
}