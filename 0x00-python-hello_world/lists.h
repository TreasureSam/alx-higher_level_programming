#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Defines a node in a singly linked list
 * @n: The integer value stored in the node
 * @next: A pointer to the next node in the list
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all the elements of a linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: A pointer to the head of the list
 * @n: The integer value to be stored in the new node
 * Return: A pointer to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * free_listint - Frees the memory allocated for a linked list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head);

/**
 * check_cycle - Checks if a linked list contains a cycle
 * @list: A pointer to the head of the list
 * Return: 1 if a cycle is present, 0 otherwise
 */
int check_cycle(listint_t *list);

#endif /* LISTS_H */
