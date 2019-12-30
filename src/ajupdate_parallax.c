/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajupdate_parallax
*/

#include "../include/my_runner.h"

void aju_parallax(parallax *_parallax)
{
    aju_first_layer(&_parallax->first_layer);
    aju_second_layer(&_parallax->second_layer);
    aju_third_layer(&_parallax->third_layer);
    aju_fourth_layer(&_parallax->fourth_layer);
    aju_fifth_layer(&_parallax->fifth_layer);
    aju_sixth_layer(&_parallax->sixth_layer);
}