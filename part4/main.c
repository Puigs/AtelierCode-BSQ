/*
** EPITECH PROJECT, 2020
** part4
** File description:
** main
*/

#include <stdio.h>

int count_nb_occurence(char *src, char *delim)
{
    int nb = 0;
    
    if (src == NULL || delim == NULL)
        return (-1);
    /**à remplir**/
    return nb;
}

int main(int ac, char **av)
{
    if (ac != 3) {
        printf("We need three agrs my friend\n");
        return (84);
    }

    int nb = count_nb_occurence(av[1], av[2]);
    if (nb == -1)
        return (84);
    printf("In %s, i can find [%d] occurence of a char of %s\n", av[1], nb, av[2]);
    return (0);
}