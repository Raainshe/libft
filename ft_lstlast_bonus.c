/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:40:27 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/22 12:53:47 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//gets the last item in the l list
t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// if(lst == NULL || lst->next == NULL)
//     return (lst);
// return (ft_lstlast(lst->next));