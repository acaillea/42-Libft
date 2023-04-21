/* ************************************************************************ */
/*	Description :															*/
/*			Adds the new element to the end of the list.					*/
/*																			*/
/*	Argument :																*/
/*			alst	=>	The address of the pointer to the first element 	*/
/*							from the list.									*/
/*			new		=>	The address of the pointer to the element to add 	*/
/*							to the list.									*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	if (!alst || !new)
		return ;
	ft_lstlast(*alst)->next = new;
}
