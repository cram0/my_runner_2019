/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_parallax
*/

#include "../include/my_runner.h"

void aju_parallax(parallax *_parallax)
{
    aju_second_layer(&_parallax->second_layer, _parallax->layer_clock);
    aju_third_layer(&_parallax->third_layer, _parallax->layer_clock);
    aju_fourth_layer(&_parallax->fourth_layer, _parallax->layer_clock);
    aju_fifth_layer(&_parallax->fifth_layer, _parallax->layer_clock);
    aju_sixth_layer(&_parallax->sixth_layer, _parallax->layer_clock);
    sfClock_restart(_parallax->layer_clock);
}