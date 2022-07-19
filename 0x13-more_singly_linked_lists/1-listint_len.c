/*
 * File: 1-listint_len.c
 * Auth: Ayub Kimani
 */

#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t xnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		xnodes++;
	}
	return (xnodes);
}
