/*
** EPITECH PROJECT, 2020
** my_read
** File description:
** my_read
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_read(int fd, char *ret, int size)
{ 
    size_t nb_read = read(fd, ret, size);
    if (nb_read == -1) {
        printf("The function read didn't work.\n");
        free(ret);
        return (NULL);
    } else if (nb_read == 0) {
        printf("The function read get the end-of-file.\n");
        free(ret);
        return (NULL);
    } else {
        printf("The function read read [%lu] char.\n", nb_read);
    }
    ret[nb_read] = 0;
    return (ret);
}