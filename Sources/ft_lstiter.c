/* ************************************************************************ */
/*	Description :															*/
/*			Iterate over the list lst and apply the function f to the 		*/
/*				content each item.											*/
/*																			*/
/*	Argument :																*/
/*			lst		=>		The address of the pointer to an item.			*/
/*			f		=>		The address of the function to apply.			*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
