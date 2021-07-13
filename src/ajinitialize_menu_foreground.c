/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajinitialize_menu_foreground
*/

#include "../include/my_runner.h"

void aji_menu_foreground(menu_foreground *_fg)
{
    _fg->start_spr = sfSprite_create();
    _fg->start_text = sfTexture_createFromFile(
        "img/background/start_button.png", NULL);
    _fg->title_spr = sfSprite_create();
    _fg->title_text = sfTexture_createFromFile(
        "img/background/title.png", NULL);
    _fg->start_clock = NULL;
    _fg->start_show = true;
    sfSprite_setTexture(_fg->start_spr, _fg->start_text, sfTrue);
    sfSprite_setTexture(_fg->title_spr, _fg->title_text, sfTrue);
    sfSprite_setPosition(_fg->start_spr, (sfVector2f){48 * SCALE_FACTOR, 171 * SCALE_FACTOR});
    sfSprite_setPosition(_fg->title_spr, (sfVector2f){28 * SCALE_FACTOR, 28 * SCALE_FACTOR});
    sfSprite_setScale(_fg->start_spr, (sfVector2f){SCALE_FACTOR / 1.75, SCALE_FACTOR / 1.75});
    sfSprite_setScale(_fg->title_spr, (sfVector2f){SCALE_FACTOR / 2.333333333, SCALE_FACTOR / 1.5});
}