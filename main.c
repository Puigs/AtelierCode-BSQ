/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_open(char const *filepath);
int my_stat(char const *filepath);
char *my_read(int fd, char *ret, int size);

int main(int ac, char **av)
{
    if (ac != 2) {
        printf("We need exactly two arguments my friend.\n");
        return (84);
    }
    int fd = my_open(av[1]);
    if (fd == -1)
        return (84);

    int size = my_stat(av[1]);
    if (size == -1)
        return (84);
    else if (size == 0)
        return (0);

    char *buff = malloc(sizeof(char) * size + 1);
    buff = my_read(fd, buff, size);
    if (buff == NULL) {
        close(fd);
        return (84);
    }
    printf("I read :\n%sfrom the file : %s.\n", buff, av[1]);
    free(buff);
    close(fd);
    
    return (0);
}