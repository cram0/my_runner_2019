/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_running_scene
*/

#include "../include/my_runner.h"

void ajd_item_list(items_list *_list, sfRenderWindow *_window, bool dbg)
{
    while (_list->item->previous != NULL) {
        _list->item = _list->item->previous;
    }
    if (_list->item->next == NULL) {
        if (_list->item->should_draw) {
            drawSprite_ifInScreen(_window, _list->item->sprite);
        }
    }
    else {
        while (_list->item->next != NULL) {
            if (_list->item->should_draw) {
                drawSprite_ifInScreen(_window, _list->item->sprite);
                if (dbg == true) {
                    sfRectangleShape *dbg_hb = sfRectangleShape_create();
                    sfRectangleShape_setSize(dbg_hb, (sfVector2f){_list->item->hitbox.width, _list->item->hitbox.height});
                    sfRectangleShape_setFillColor(dbg_hb, sfBlue);
                    sfRectangleShape_setPosition(dbg_hb, (sfVector2f){_list->item->hitbox.left, _list->item->hitbox.top});
                    sfRenderWindow_drawRectangleShape(_window, dbg_hb, NULL);
                }
            }
            _list->item = _list->item->next;
        }
    }
}

void ajd_item_tag(running_scene *_scene, sfRenderWindow *_window)
{
    if (_scene->item_tag->should_draw)
        sfRenderWindow_drawSprite(_window, _scene->item_tag->sprite, NULL);
}

void ajd_running_scene(running_scene *_running_scene)
{
    ajd_parallax_thunder(_running_scene);
    ajd_player(&_running_scene->player, _running_scene->window);
    ajd_enemy_list(_running_scene->enemies, _running_scene->window, _running_scene->debug);
    ajd_item_list(_running_scene->items, _running_scene->window, _running_scene->debug);
    ajd_item_tag(_running_scene, _running_scene->window);
    if (_running_scene->debug == true) {
        ajd_dbg_player_hitbox(_running_scene);
    }
    ajd_score(_running_scene);
}