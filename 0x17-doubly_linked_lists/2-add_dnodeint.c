#include "listsh"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (!head)
	{
		return NULL;
	}

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return NULL;
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return new_node;
}
