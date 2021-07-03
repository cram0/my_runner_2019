/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_running_scene_music
*/

#include "../include/my_runner.h"

void aji_running_scene_music(running_scene *_scene)
{
    _scene->music = sfMusic_createFromFile("music/crystal_teardrops.ogg");
    sfMusic_setLoop(_scene->music, sfTrue);
    sfMusic_setVolume(_scene->music, 25.0);
}