#include "lists.h"
/**
 * is_palindrome - a function that checks if a linked list is a palindrome
 * @head: a double pointer to the head of the linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp = *head;
	int i = 0, j = 0, x, *mylist;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	mylist = malloc(sizeof(int) * i);
	if (mylist == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL)
	{
		mylist[j] = temp->n;
		j++;
		temp = temp->next;
	}

	if (i % 2 == 0)
		x = i / 2;
	else
		x = (i - 1) / 2;

	for (j = 0; j <= x; j++)
	{
		if (mylist[j] != mylist[i - (j + 1)])
		{
			free(mylist);
			return (0);
		}
	}

	free(mylist);
	return (1);
}
