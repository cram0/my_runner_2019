/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitialize_player
*/

#include "../include/my_runner.h"

void aji_player(player *_player)
{
    aji_player_stance(&_player->stance_anim);
    _player->anim_clock = NULL;
    _player->move_clock = NULL;
    _player->sprite = sfSprite_create();
    _player->hitbox = (sfIntRect){0, 0, 0, 0};
    sfSprite_setScale(_player->sprite, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
    _player->pos.x = 28.571428571 * SCALE_FACTOR;
    _player->pos.y = 102 * SCALE_FACTOR;
    _player->state = IDLE;
    _player->dy = 0;
    _player->texture = sfTexture_createFromFile("img/alucard/alucard_sheet.png",
    NULL);
    sfSprite_setTexture(_player->sprite, _player->texture, sfTrue);
    sfSprite_setTextureRect(_player->sprite, _player->stance_anim.idling.rect);
    aji_player_shadows(_player);
}