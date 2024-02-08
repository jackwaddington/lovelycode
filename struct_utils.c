/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utiils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:40:00 by jwadding          #+#    #+#             */
/*   Updated: 2024/02/08 17:12:40 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"header.h"
void	ft_lstadd_back(jack_list **node, jack_list *new_node)
{
	// if nothing comes, end
	if (!node || !new_node)
			return ;
	// if this is the firt item in the list, it is the list.
	if (!*node)
		*node = new_node;
	// or add it to the back
	else
		(ft_lstlast(*node))->next = new_node;
}


jack_list *ft_lstlast(jack_list *node)
// what is the address of the last node in the chain?
{
	if(!node)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

jack_list *ft_lstnew(void *content)
{
	jack_list *new_node;

	new_node = (jack_list*)malloc(sizeof(jack_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->no1 = 0;
	new_node->no2 = 0;
	new_node->no3 = 0;
	new_node->next = NULL;
	return (new_node);
}


