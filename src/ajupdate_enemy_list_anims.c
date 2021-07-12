/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** ajupdate_enemy_list_anims
*/

#include "../include/my_runner.h"

void aju_bat_anim(enemy_t *_bat)
{
    if (!_bat->anim_clock) {_bat->anim_clock = sfClock_create(); }
    if (sfTime_asSeconds(sfClock_getElapsedTime(_bat->anim_clock)) > 0.050) {
        if (_bat->text_rect.left == _bat->text_rect.width * 11)
            _bat->text_rect.left = 0;
        sfSprite_setTextureRect(_bat->sprite, _bat->text_rect);
        _bat->text_rect.left += _bat->text_rect.width;
        sfClock_restart(_bat->anim_clock);
    }
}

void aju_ww_anim(enemy_t *_ww)
{
    if (!_ww->anim_clock) {_ww->anim_clock = sfClock_create(); }
    if (sfTime_asSeconds(sfClock_getElapsedTime(_ww->anim_clock)) > 0.100) {
        if (_ww->text_rect.left == _ww->text_rect.width * 4)
            _ww->text_rect.left = 0;
        sfSprite_setTextureRect(_ww->sprite, _ww->text_rect);
        _ww->text_rect.left += _ww->text_rect.width;
        sfClock_restart(_ww->anim_clock);
    }
}

void aju_panth_anim(enemy_t *_panth)
{
    if (!_panth->anim_clock) {_panth->anim_clock = sfClock_create(); }
    if (sfTime_asSeconds(sfClock_getElapsedTime(_panth->anim_clock)) > 0.070) {
        if (_panth->text_rect.left == _panth->text_rect.width * 4)
            _panth->text_rect.left = 0;
        sfSprite_setTextureRect(_panth->sprite, _panth->text_rect);
        _panth->text_rect.left += _panth->text_rect.width;
        sfClock_restart(_panth->anim_clock);
    }
}

void aju_knight_anim(enemy_t *_knight)
{
    if (!_knight->anim_clock) {_knight->anim_clock = sfClock_create(); }
    if (sfTime_asSeconds(sfClock_getElapsedTime(_knight->anim_clock)) > 0.120) {
        if (_knight->text_rect.left == _knight->text_rect.width * 5)
            _knight->text_rect.left = 0;
        sfSprite_setTextureRect(_knight->sprite, _knight->text_rect);
        _knight->text_rect.left += _knight->text_rect.width;
        sfClock_restart(_knight->anim_clock);
    }
}

void aju_enemy_list_anims(enemy_t *_enemy)
{
    while (_enemy->next != NULL) {
        switch (_enemy->type) {
            case BAT: aju_bat_anim(_enemy);
                break;
            case WEREWOLF: aju_ww_anim(_enemy);
                break;
            case PANTHER: aju_panth_anim(_enemy);
                break;
            case KNIGHT: aju_knight_anim(_enemy);
                break;
        }
        _enemy = _enemy->next;
    }
}