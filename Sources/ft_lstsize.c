/* ************************************************************************ */
/*	Description :															*/
/*			Count the number of items in the list.							*/
/*																			*/
/*	Argument :																*/
/*			lst		=>		The beginning of the list.						*/
/*																			*/
/*	Return :																*/
/*			List size.														*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
