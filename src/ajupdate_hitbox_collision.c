/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajupdate_hitbox_collision
*/

#include "../include/my_runner.h"

void aju_hitbox_collision_item(running_scene *_scene)
{
    while(_scene->items->item->previous != NULL) {
        _scene->items->item = _scene->items->item->previous;
    }
    if (_scene->items->item->next == NULL) {
        if (sfIntRect_intersects(&_scene->items->item->hitbox, &_scene->player.hitbox, NULL)) {
            if (_scene->items->item->should_draw) {
                sfSound_play(_scene->items->sound);
                aju_hitbox_collision_item_type(_scene, _scene->items->item);
            }
        }
    }
    else {
        while (_scene->items->item->next != NULL) {
            if (sfIntRect_intersects(&_scene->items->item->hitbox, &_scene->player.hitbox, NULL)) {
                if (_scene->items->item->should_draw) {
                    sfSound_play(_scene->items->sound);
                    aju_hitbox_collision_item_type(_scene, _scene->items->item);
                }
            }
            _scene->items->item = _scene->items->item->next;
        }
    }
    aju_item_tag_clock(_scene);
}

void aju_hitbox_collision_enemies(running_scene _scene)
{
    if (_scene.enemies->next == NULL) {
        if (sfIntRect_intersects(&_scene.enemies->hitbox, &_scene.player.hitbox,
        NULL)) {
            sfMusic_stop(_scene.music);
            *_scene.game_state = GAMEOVER;
        }
    }
    else {
        while (_scene.enemies->next != NULL) {
            if (sfIntRect_intersects(&_scene.enemies->hitbox, &
            _scene.player.hitbox, NULL)) {
                sfMusic_stop(_scene.music);
                *_scene.game_state = GAMEOVER;
            }
            _scene.enemies = _scene.enemies->next;
        }
    }
}

void aju_hitbox_collision(running_scene *_scene)
{
    aju_hitbox_collision_enemies(*_scene);
    aju_hitbox_collision_item(_scene);
}