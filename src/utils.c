/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** utils
*/

#include "../include/my_runner.h"

int get_random_number(int min, int max)
{
    return ((rand() % (max - min + 1)) + min);
}