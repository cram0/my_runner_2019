/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajinitialize_parallax
*/

#include "../include/my_runner.h"

void ajinitialize_parallax(parallax *_parallax)
{
    ajinitialize_first_layer(&_parallax->first_layer);
    ajinitialize_second_layer(&_parallax->second_layer);
    ajinitialize_third_layer(&_parallax->third_layer);
    ajinitialize_fourth_layer(&_parallax->fourth_layer);
    ajinitialize_fifth_layer(&_parallax->fifth_layer);
    ajinitialize_sixth_layer(&_parallax->sixth_layer);
}