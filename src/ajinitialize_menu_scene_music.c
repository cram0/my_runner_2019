/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_menu_scene_music
*/

#include "../include/my_runner.h"

void aji_menu_scene_music(menu_scene *_scene)
{
    _scene->music = sfMusic_createFromFile("music/prayer.ogg");
    sfMusic_setLoop(_scene->music, sfTrue);
    sfMusic_setVolume(_scene->music, 50.0);
}