#include "list.h"

void	print_list(t_node *head)
{
	t_node	*iterator = head;

	while (iterator != NULL)
	{
		printf("%d", iterator->val);
		iterator = iterator->next;
	}
}
