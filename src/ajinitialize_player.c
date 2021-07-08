/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitialize_player
*/

#include "../include/my_runner.h"

void aji_player_shadows(player *_player)
{
    _player->shadow = malloc(sizeof(player_shadow_t));
    _player->shadow->update_clock = NULL;
    _player->shadow->shadow_idx = 0;
    _player->shadow->lifespan_clock = NULL;
    for (int i = 0; i < 5; i++) {
        _player->shadow->sprite[i] = sfSprite_create();
    }
}

void aji_player(player *_player)
{
    aji_player_stance(&_player->stance_anim);
    _player->anim_clock = sfClock_create();
    _player->move_clock = sfClock_create();
    _player->sprite = sfSprite_create();
    _player->hitbox = (sfIntRect){0, 0, 0, 0,};
    sfSprite_setScale(_player->sprite, (sfVector2f){3.5, 3.5});
    _player->pos.x = 100;
    _player->pos.y = 357;
    _player->state = IDLE;
    _player->dy = 0;
    _player->texture = sfTexture_createFromFile("img/alucard/alucard_sheet.png",
    NULL);
    sfSprite_setTexture(_player->sprite, _player->texture, sfTrue);
    sfSprite_setTextureRect(_player->sprite, _player->stance_anim.idling.rect);
    aji_player_shadows(_player);
}