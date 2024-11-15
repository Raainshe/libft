/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:55:02 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 13:35:32 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a new lst with the functions f data
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		next = ft_lstnew(content);
		if (!next)
		{
			if (content)
				del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, next);
		lst = lst->next;
	}
	return (new);
}
