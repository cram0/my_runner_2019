/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_item
*/

#include "../include/my_runner.h"

void reset_item_clock(items_list *_list)
{
    sfClock_restart(_list->move_clock);
}

void aju_item_hitbox(items_list *_list)
{
    while (_list->item->previous != NULL) {
        _list->item = _list->item->previous;
    }
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
    while (_list->item->previous != NULL) {
        _list->item = _list->item->previous;
    }
    if (_list->item->next == NULL) {
        if (_list->item->pos.x <= (-85.714285714 * SCALE_FACTOR))
            _list->item->pos.x = (-85.714285714 * SCALE_FACTOR);
        _list->item->pos.x -= (85.714285714 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_list->move_clock));
        sfSprite_setPosition(_list->item->sprite, _list->item->pos);
    }
    else
        while (_list->item->next != NULL) {
            if (_list->item->pos.x <= (-85.714285714 * SCALE_FACTOR))
                _list->item->pos.x = (-85.714285714 * SCALE_FACTOR);
            _list->item->pos.x -= (85.714285714 * SCALE_FACTOR) * sfTime_asSeconds(sfClock_getElapsedTime(_list->move_clock));
            sfSprite_setPosition(_list->item->sprite, _list->item->pos);
            _list->item = _list->item->next;
        }
}

void aju_item_list(items_list *_list)
{
    if (!_list->move_clock) { _list->move_clock = sfClock_create(); }
    aju_item_pos(_list);
    aju_item_hitbox(_list);
    reset_item_clock(_list);
}