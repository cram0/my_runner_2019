/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_running_scene
*/

#include "../include/my_runner.h"

void reset_item_clock(items_list *_list)
{
    sfClock_restart(_list->move_clock);
}

void aju_item_hitbox(items_list *_list)
{
    if (_list->item->next == NULL) {
        _list->item->hitbox.left = _list->item->pos.x;
        _list->item->hitbox.top = _list->item->pos.y;
    }
    else
        while (_list->item->next != NULL) {
            _list->item->hitbox.left = _list->item->pos.x;
            _list->item->hitbox.top = _list->item->pos.y;
            _list->item = _list->item->next;
        }
}

void aju_item_pos(items_list *_list)
{
    if (_list->item->next == NULL) {
        if (_list->item->pos.x <= -300)
            _list->item->pos.x = -300;
        _list->item->pos.x -= 300 * sfTime_asSeconds(sfClock_getElapsedTime(_list->move_clock));
        sfSprite_setPosition(_list->item->sprite, _list->item->pos);
        // printf("X : %f, Y : %f\n", _list->item->pos.x, _list->item->pos.y);
    }
    else
        while (_list->item->next != NULL) {
            if (_list->item->pos.x <= -300)
                _list->item->pos.x = -300;
            _list->item->pos.x -= 300 * sfTime_asSeconds(sfClock_getElapsedTime(_list->move_clock));
            sfSprite_setPosition(_list->item->sprite, _list->item->pos);
            printf("X : %f, Y : %f\n", _list->item->pos.x, _list->item->pos.y);
            _list->item = _list->item->next;
        }
}

void aju_item_list(items_list *_list)
{
    aju_item_pos(_list);
    aju_item_hitbox(_list);
    reset_item_clock(_list);
}

void aju_running_scene(running_scene *_running_scene)
{
    aju_running_scene_event(_running_scene);
    aju_parallax(&_running_scene->parallax);
    aju_player(&_running_scene->player);
    aju_enemy_list(_running_scene);
    aju_item_list(_running_scene->items);
    aju_score(_running_scene);
    aju_thunder(_running_scene);
}