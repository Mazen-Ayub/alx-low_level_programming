#include "lists.h"

/**
 * delete_nodeint_at_index - a fun that deletes a node in a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		x++;
	}


	current = tem->next;
	tem->next = current->next;
	free(current);
	return (1);
}
