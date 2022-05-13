/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** getlist
*/

#include "pushswap.h"

void mylist(int ac, char *av[], node_t *head_a)
{
    node_t *current = head_a;
    current->nb = my_getnbr(av[1]);
    current->next = NULL;

    for (int i = 2; i < ac; i++)
        add_node(head_a, my_getnbr(av[i]));
}

void add_node(node_t *head_a, int nb)
{
    node_t *current = head_a;

    while (current->next != NULL)
        current = current->next;
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->nb = nb;
    current->next->next = NULL;
}

void printa(node_t *head_a)
{
    node_t *current = head_a;

    while (current->next != NULL) {
        my_putnbr(current->nb);
        my_putchar(' ');
        current = current->next;
    }
    my_putnbr(current->nb);
}

void printb(node_t *head_b)
{
    node_t *current = head_b;

    while (current != NULL) {
        my_putnbr(current->nb);
        my_putstr("\n");
        current = current->next;
    }
}
