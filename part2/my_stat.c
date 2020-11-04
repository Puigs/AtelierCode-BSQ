/*
** EPITECH PROJECT, 2020
** Stat
** File description:
** my_stat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int my_stat(char const *filepath)
{
    int check = 0;
    struct stat my_stat;

    check = stat(/*****/, /*****/);
    if (check == /*****/) {
        printf("The function stat didn't work my friend.\n");
        return (check);
    } else {
        printf("Stat ok.\n");
    }
    return (my_stat.st_size);
}