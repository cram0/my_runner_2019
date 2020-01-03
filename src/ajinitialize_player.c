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
    _player->anim_clock = sfClock_create();
    _player->move_clock = sfClock_create();
    _player->sprite = sfSprite_create();
    sfSprite_setScale(_player->sprite, (sfVector2f){3.5, 3.5});
    _player->pos.x = 0;
    _player->pos.y = 0;
    _player->state = IDLE;
    _player->dy = 0;
    sfSprite_setTexture(_player->sprite, _player->stance_anim.idling.texture,
    sfTrue);
    sfSprite_setTextureRect(_player->sprite, _player->stance_anim.idling.rect[0]);
    // printf("%i, %i, %i, %i\n", _player->stance_anim.idling.rect[0].left, _player->stance_anim.idling.rect[0].top, _player->stance_anim.idling.rect[0].width, _player->stance_anim.idling.rect[0].height);
}