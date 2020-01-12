/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aju_running_scene_event
*/

#include "../include/my_runner.h"

void aju_hitbox_collision(running_scene _scene)
{
    if (_scene.enemies->next == NULL) {
        if (sfIntRect_intersects(&_scene.enemies->hitbox, &_scene.player.hitbox,
        NULL))
            sfRenderWindow_close(_scene.window);
    }
    else {
        while (_scene.enemies->next != NULL) {
            if (sfIntRect_intersects(&_scene.enemies->hitbox, &
            _scene.player.hitbox, NULL))
                sfRenderWindow_close(_scene.window);
            _scene.enemies = _scene.enemies->next;
        }
    }
}

void aju_running_scene_event(running_scene *_scene)
{
    aju_hitbox_collision(*_scene);
    if (sfMusic_getStatus(_scene->music) != sfPlaying)
            sfMusic_play(_scene->music);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(_scene->music);
        sfRenderWindow_close(_scene->window);
    }
}