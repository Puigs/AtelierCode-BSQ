/*
** EPITECH PROJECT, 2020
** Open
** File description:
** 
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int my_open(char const *filepath)
{
    int fd = 0;

    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        printf("The function open didn't work my friend\n");
        close(fd);
    } else
        printf("Open ok.\n");
    return (fd);
}