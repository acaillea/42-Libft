/* ************************************************************************ */
/*	Description :															*/
/*			Free the memory of the element passed as an argument using the 	*/
/*				del function then with free (3). The next memory must not 	*/
/*				be free.													*/
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

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}
