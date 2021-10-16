/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:23:18 by stycho            #+#    #+#             */
/*   Updated: 2021/10/16 20:23:21 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res_lst;

	void 	*res_of_f;

	if (!lst)
		return NULL;
	res_lst  = NULL;
	while (lst)
	{
		res_of_f = (*f)(lst->content);
		if (res_of_f)
		{
			ft_lstadd_back(&res_lst , ft_lstnew(res_of_f));
		}
		if (*del)
			(*del)(lst->content);
		lst = lst->next;
	}
	return(res_lst);
}
