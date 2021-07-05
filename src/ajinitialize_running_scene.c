/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_running_scene
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

void add_node_item_empty(items_list *_list, int item_id)
{
    _list->item->sprite = sfSprite_create();
    _list->item->pos = fill_item_pos(item_id);
    _list->item->hitbox = fill_item_hitbox(item_id);
    _list->item->type = fill_item_type(item_id);
    _list->item->should_draw = true;
    fill_item_texture(_list->item->sprite, _list->texture, item_id);
    sfSprite_setPosition(_list->item->sprite, _list->item->pos);
    sfSprite_setScale(_list->item->sprite, (sfVector2f){3.5, 3.5});
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
    sfSprite_setScale(temp->sprite, (sfVector2f){3.5, 3.5});
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
    int map_i = 0, offset = 500;
    while (map[map_i++])
        switch (map[map_i]) {
            case 'i': offset += 1000;
                add_node_item(_list, ICE_CREAM, offset);
                break;
            case 't': offset += 1000;
                add_node_item(_list, TURKEY, offset);
                break;
            case 's': offset += 1000;
                add_node_item(_list, SHORTCAKE, offset);
                break;
            case 'a': offset += 1000;
                add_node_item(_list, APPLE, offset);
                break;
            case 'S': offset += 1000;
                add_node_item(_list, SPAGHETTI, offset);
                break;
            case 'p': offset += 1000;
                add_node_item(_list, PARFAIT, offset);
                break;
            case ' ': offset += 100;
                break;
            default:
                break;
        }
}

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

void aji_running_scene(running_scene *_running_scene, sfRenderWindow *_window, char *map)
{
    _running_scene->window = _window;
    _running_scene->enemies = malloc(sizeof(enemy_t));
    _running_scene->items = malloc(sizeof(items_list));
    _running_scene->item_tag = malloc(sizeof(item_tag_t));
    _running_scene->debug = false;
    _running_scene->clock = sfClock_create();
    aji_enemy_types_text(&_running_scene->enemy_types_text);
    aji_enemy_list(_running_scene->enemies, map, &_running_scene->enemy_types_text);
    aji_enemies_clocks(&_running_scene->clocks);
    aji_item_tag(_running_scene->item_tag);
    aji_item_list(_running_scene->items, map);
    aji_item_sound(_running_scene->items);
    aji_parallax(&_running_scene->parallax);
    aji_thunder(_running_scene);
    aji_player(&_running_scene->player);
    aji_running_scene_music(_running_scene);
    aji_running_scene_score(_running_scene);
}