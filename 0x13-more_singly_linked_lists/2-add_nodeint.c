#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning
 * @head: first element
 * @n: number of elements
 * Return: address of new element, null if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
} 
