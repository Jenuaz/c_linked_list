#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct		s_node
{
	int		val;
	struct s_node 	*next;
}			t_node;

void	print_list(t_node *head);

#endif
