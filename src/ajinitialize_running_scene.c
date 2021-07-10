/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_running_scene
*/

#include "../include/my_runner.h"

void aji_running_scene(running_scene *_running_scene, sfRenderWindow *_window, char *map)
{
    _running_scene->window = _window;
    _running_scene->enemies = malloc(sizeof(enemy_t));
    _running_scene->items = malloc(sizeof(items_list));
    _running_scene->item_tag = malloc(sizeof(item_tag_t));
    _running_scene->debug = false;
    _running_scene->clock = NULL;
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
    aji_score(_running_scene);
}