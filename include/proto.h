/*
** EPITECH PROJECT, 2022
** Modules
** File description:
** proto
*/

#ifndef PROTO_H_
    #define PROTO_H_

    #include "struct.h"

    void mylist(int ac, char *av[], node_t *head_a);
    void add_node(node_t *head_a, int nb);
    void printa(node_t *head_a);
    void printb(node_t *head_b);
    void sa(node_t **head_a);
    void sb(node_t **head_b);
    void sc(node_t **head_a, node_t **head_b);
    void pa(node_t **head_a, node_t **head_b);
    void pb(node_t **head_a, node_t **head_b);
    void pp(node_t **head_a, node_t **head_b);
    void ra(node_t **head_a);
    void rb(node_t **head_b);
    void rr(node_t **head_a, node_t **head_b);
    void rra(node_t **head_a);
    void rrb(node_t **head_b);
    void rrr(node_t **head_a, node_t **head_b);
    void seek_for_min(node_t **head_a, comp_t *get);
    void get_min_pos(node_t **head_a, comp_t *get);
    void get_min_on_top(node_t **head_a, comp_t *get);
    void all_to_lb(node_t **head_a, node_t **head_b, comp_t *get);
    void all_to_la(node_t **head_a, node_t **head_b);
    void writeops(int ac);

#endif /* !PROTO_H_ */
