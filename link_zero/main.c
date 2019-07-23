#include "list.h"
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	t_node *head = NULL;
	
	if ((head = (t_node *)malloc(sizeof(t_node))) == NULL) 
		return 0;
	head->val = 1;
	head->next = (t_node *)malloc(sizeof(t_node));
	head->next->val = 2;
	head->next->next = NULL;


	print_list(head);
	return 0;
}
