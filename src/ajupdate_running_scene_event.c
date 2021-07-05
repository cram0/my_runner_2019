/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aju_running_scene_event
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
    if (_scene->item_tag->should_draw) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(_scene->item_tag->duration_clock)) >= 2000) {
            _scene->item_tag->should_draw = false;
        }
    }
    else {
        sfClock_restart(_scene->item_tag->duration_clock);
    }
}

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

void aju_running_scene_event(running_scene *_scene)
{
    if (sfMusic_getStatus(_scene->music) != sfPlaying)
            sfMusic_play(_scene->music);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(_scene->music);
        sfRenderWindow_close(_scene->window);
    }
    aju_hitbox_collision(_scene);
}