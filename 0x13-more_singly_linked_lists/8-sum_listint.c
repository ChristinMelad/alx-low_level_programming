#include "lists.h"

/**
*sum_listint - add all the data (n) of the list.
*@head: pointer to the 1st node
*Return: returns the sum of all the data (n).
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

while (head)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
