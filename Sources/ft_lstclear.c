/* ************************************************************************ */
/*	Description :															*/
/*			Removes and frees the memory of the element passed in parameter	*/
/*				and all the following elements, to using del and free		*/
/*				Finally, the initial pointer must be set to NULL.			*/
/*																			*/
/*	Argument :																*/
/*			lst		=>		The address of the pointer to an item.			*/
/*			del		=>		The address of the function allowing delete 	*/
/*								the content of an item.						*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst1;
	t_list	*lst2;

	if (!lst)
		return ;
	lst1 = *lst;
	while (lst1)
	{
		lst2 = lst1->next;
		ft_lstdelone(lst1, del);
		lst1 = lst2;
	}
	*lst = NULL;
}
