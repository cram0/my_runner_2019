/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajinitialize_item
*/

#include "../include/my_runner.h"

void add_node_item_empty(items_list *_list, int item_id)
{
    _list->item->sprite = sfSprite_create();
    _list->item->pos = fill_item_pos(item_id);
    _list->item->hitbox = fill_item_hitbox(item_id);
    _list->item->type = fill_item_type(item_id);
    _list->item->should_draw = true;
    fill_item_texture(_list->item->sprite, _list->texture, item_id);
    sfSprite_setPosition(_list->item->sprite, _list->item->pos);
    sfSprite_setScale(_list->item->sprite, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
}

void add_node_item_filled(items_list *_list, int item_id, int offset)
{
    while (_list->item->next != NULL)
        _list->item = _list->item->next;
    item_t *temp = malloc(sizeof(item_t));
    temp->sprite = sfSprite_create();
    temp->pos = fill_item_pos(item_id);
    temp->pos.x = offset;
    temp->hitbox = fill_item_hitbox(item_id);
    temp->type = fill_item_type(item_id);
    temp->should_draw = true;
    fill_item_texture(temp->sprite, _list->texture, item_id);
    sfSprite_setPosition(temp->sprite, temp->pos);
    sfSprite_setScale(temp->sprite, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
    _list->item->next = temp;
    temp->previous = _list->item;
    temp->next = NULL;
}

void add_node_item(items_list *_list, int item_id, int offset)
{
    if (_list->item->sprite == NULL) {
        add_node_item_empty(_list, item_id);
    }
    else {
        add_node_item_filled(_list, item_id, offset);
    }
}

void aji_item_sound(items_list *_list)
{
    sfSoundBuffer *sdnbf_tmp = sfSoundBuffer_createFromFile("sounds/running_scene/item_pickup.wav");
    _list->sound = sfSound_create();
    sfSound_setBuffer(_list->sound, sdnbf_tmp);
}

void aji_item_list_scratch(items_list *_list)
{
    _list->texture = sfTexture_createFromFile("img/items/food.png", NULL);
    _list->move_clock = sfClock_create();
    _list->item = malloc(sizeof(item_t));
    _list->item->sprite = NULL;
    _list->item->previous = NULL;
    _list->item->next = NULL;
}

void aji_item_list(items_list *_list, char *map)
{
    aji_item_list_scratch(_list);
    int map_i = 0, offset = BASE_ITEM_OFFSET / 2;
    while (map[map_i++])
        switch (map[map_i]) {
            case 'i': offset += BASE_ITEM_OFFSET;
                add_node_item(_list, ICE_CREAM, offset);
                break;
            case 't': offset += BASE_ITEM_OFFSET;
                add_node_item(_list, TURKEY, offset);
                break;
            case 's': offset += BASE_ITEM_OFFSET;
                add_node_item(_list, SHORTCAKE, offset);
                break;
            case 'a': offset += BASE_ITEM_OFFSET;
                add_node_item(_list, APPLE, offset);
                break;
            case 'S': offset += BASE_ITEM_OFFSET;
                add_node_item(_list, SPAGHETTI, offset);
                break;
            case 'p': offset += BASE_ITEM_OFFSET;
                add_node_item(_list, PARFAIT, offset);
                break;
            case ' ': offset += BLANK_ITEM_OFFSET;
                break;
            default:
                break;
        }
}