/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_player
*/

#include "../include/my_runner.h"
static const float GRAVITY = 1250;

void aju_player_event(player *_player)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace))
    {
        if (_player->state != JUMPING && _player->state != FALLING) {
            _player->state = JUMPING;
            _player->stance_anim.falling.rect.left = 0;            _player->stance_anim.jumping.rect.left = 0;
            _player->stance_anim.running.rect.top = 0;
            _player->stance_anim.running.rect.left = 0;
            _player->dy = -700;
        }
    }
}

void aju_player_animation_idle(player *_player)
{
    float test = sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock));
    if (test > 0.110) {
        if (_player->stance_anim.idling.rect.left == _player->stance_anim.idling.rect.width * 5)
            _player->stance_anim.idling.rect.left = 0;
        sfSprite_setTextureRect(_player->sprite, _player->stance_anim.idling.rect);
        _player->stance_anim.idling.rect.left += _player->stance_anim.idling.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation_jumping(player *_player)
{
    float test = sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock));
    if (test > 0.100) {
        if (_player->stance_anim.jumping.rect.left == _player->stance_anim.jumping.rect.width * 4)
            _player->stance_anim.jumping.rect.left = _player->stance_anim.jumping.rect.width * 3;
        sfSprite_setTextureRect(_player->sprite, _player->stance_anim.jumping.rect);
        _player->stance_anim.jumping.rect.left += _player->stance_anim.jumping.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation_falling(player *_player)
{
    float test = sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock));
    if (test > 0.070) {
        if (_player->stance_anim.falling.rect.left == 329){
            _player->stance_anim.falling.rect.left = 282;
        }
        sfSprite_setTextureRect(_player->sprite, _player->stance_anim.falling.rect);
        printf("rect left falling : %d\n",_player->stance_anim.falling.rect.left);
        _player->stance_anim.falling.rect.left += _player->stance_anim.falling.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation_running(player *_player)
{
    float test = sfTime_asSeconds(sfClock_getElapsedTime(_player->anim_clock));
    if (test > 0.050) {
        if (_player->stance_anim.running.rect.left == 720 && _player->stance_anim.running.rect.top == 0 || _player->stance_anim.running.rect.left == 768){
            _player->stance_anim.running.rect.left = 0;
            _player->stance_anim.running.rect.top = 51;
        }
        sfSprite_setTextureRect(_player->sprite, _player->stance_anim.running.rect);
        _player->stance_anim.running.rect.left += _player->stance_anim.running.rect.width;
        sfClock_restart(_player->anim_clock);
    }
}

void aju_player_animation(player *_player)
{
    switch (_player->state)
    {
    case IDLE:
        // aju_player_animation_idle(_player);
        break;
    case JUMPING:
        aju_player_animation_jumping(_player);
        break;
    case FALLING:
        aju_player_animation_falling(_player);
        break;
    case RUNNING:
        aju_player_animation_running(_player);
        break;
    }

}

void aju_player_position_y(player *_player)
{
    float dt = sfTime_asSeconds(sfClock_getElapsedTime(_player->move_clock));
    if (_player->state == RUNNING)
        _player->dy = 0;
    else {
        _player->dy += GRAVITY * dt;
        _player->pos.y += _player->dy * dt;
    }
    if (_player->pos.y > 357.0) {
        if (_player->state != RUNNING) {
        }
        _player->pos.y = 357.0;
        _player->state = RUNNING;
    }
}

void aju_player_check_state(player *_player)
{
    if (_player->dy > 0)
        _player->state = FALLING;
}

void aju_player_position(player *_player)
{
    aju_player_check_state(_player);
    aju_player_position_y(_player);
    sfSprite_setPosition(_player->sprite, _player->pos);
    sfClock_restart(_player->move_clock);
    if (_player->state == RUNNING)
        printf("RUNNING\n");
    if (_player->state == JUMPING)
        printf("JUMPING\n");
    if (_player->state == FALLING)
        printf("FALLING\n");
}

void aju_player(player *_player)
{
    aju_player_event(_player);
    aju_player_position(_player);
    aju_player_animation(_player);
}