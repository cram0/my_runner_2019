/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_menu_scene
*/

#include "../include/my_runner.h"

void aji_menu_scene(menu_scene *_scene, sfRenderWindow *_window)
{
    _scene->window = _window;
    _scene->sound_start = sfSound_create();
    _scene->sound_start_buf = sfSoundBuffer_createFromFile(
    "sounds/menu/press_start.ogg");
    sfSound_setBuffer(_scene->sound_start, _scene->sound_start_buf);
    aji_menu_scene_music(_scene);
    aji_menu_background(&_scene->background);
    aji_menu_foreground(&_scene->foreground);
}