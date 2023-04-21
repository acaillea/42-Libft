/* ************************************************************************ */
/*	Description :															*/
/*			Adds the new element to the start of the list.					*/
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

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
