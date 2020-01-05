/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_parallax
*/

#include "../include/my_runner.h"

void aji_parallax(parallax *_parallax)
{
    _parallax->layer_clock = sfClock_create();
    aji_first_layer(&_parallax->first_layer);
    aji_second_layer(&_parallax->second_layer);
    aji_third_layer(&_parallax->third_layer);
    aji_fourth_layer(&_parallax->fourth_layer);
    aji_fifth_layer(&_parallax->fifth_layer);
    aji_sixth_layer(&_parallax->sixth_layer);
}