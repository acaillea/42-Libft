/* ************************************************************************ */
/*	Description :															*/
/*			 Iterates over the list lst and applies the function f to the 	*/
/*			 	content of each item. Creates a new list resulting from 	*/
/*			 	successive applications of f. The function del is there to 	*/
/*			 	destroy the content of an element if necessary				*/
/*																			*/
/*	Argument :																*/
/*				lst		=>	L’adresse du pointeur vers un élément.		  */
/*				f		=>	L’adresse de la fonction à appliquer.			 */
/*																			*/
/*	Return :																*/
/*			The new list. NULL if the allocation fails.						*/
/* ************************************************************************ */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*scd_lst;
	t_list	*elem;

	if (!lst)
		return (NULL);
	elem = ft_lstnew(f(lst->content));
	if (!elem)
		return (NULL);
	scd_lst = elem;
	lst = lst->next;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!scd_lst)
		{
			ft_lstclear(&scd_lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&scd_lst, elem);
	}
	return (scd_lst);
}
