/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_game_over_scene
*/

#include "../include/my_runner.h"

void aji_game_over_scene(game_over_scene *_scene, sfRenderWindow *_window)
{
    _scene->window = _window;
    _scene->sprite = sfSprite_create();
    _scene->texture = sfTexture_createFromFile("img/background/gameover.png",
    NULL);
    _scene->pos = (sfVector2f){0, 0};
    _scene->text_rect = (sfIntRect){0, 0, 256, 207};
    _scene->music = sfMusic_createFromFile("music/game_over.ogg");
    _scene->clock = sfClock_create();
    sfSprite_setScale(_scene->sprite, (sfVector2f){3.5, 4.1});
    sfMusic_setVolume(_scene->music, 50.0);
    sfSprite_setTexture(_scene->sprite, _scene->texture, sfTrue);
    sfSprite_setTextureRect(_scene->sprite, _scene->text_rect);
    sfSprite_setPosition(_scene->sprite, _scene->pos);
}