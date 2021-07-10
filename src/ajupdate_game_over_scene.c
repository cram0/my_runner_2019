/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_game_over_scene
*/

#include "../include/my_runner.h"

void aju_game_over_scene(game_over_scene *_scene)
{
    if (!_scene->clock) {_scene->clock = sfClock_create(); }
    if (sfTime_asSeconds(sfClock_getElapsedTime(_scene->clock)) > 0.300) {
        if (_scene->text_rect.left >= _scene->text_rect.width * 5)
            _scene->text_rect.left = _scene->text_rect.width * 4;
        sfSprite_setTextureRect(_scene->sprite, _scene->text_rect);
        _scene->text_rect.left += _scene->text_rect.width;
        sfClock_restart(_scene->clock);
    }
    if (sfMusic_getStatus(_scene->music) == sfStopped)
        sfMusic_play(_scene->music);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(_scene->music);
        sfRenderWindow_close(_scene->window);
    }
}