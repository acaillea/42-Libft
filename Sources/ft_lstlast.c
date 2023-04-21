/* ************************************************************************ */
/*	Description :															*/
/*			Returns the last item in the list.								*/
/*																			*/
/*	Argument :																*/
/*			lst		=>		The beginning of the list.						*/
/*																			*/
/*	Return :																*/
/*			Last item in the list											*/
/* ************************************************************************ */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != NULL)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
