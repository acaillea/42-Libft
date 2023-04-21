/* ************************************************************************ */
/*	Description :															*/
/*			Allocates and returns a new element. The content variable is 	*/
/*				initialized using the value of the content parameter. 		*/
/*				The variable "next" is initialized to NULL.					*/
/*																			*/
/*	Argument :																*/
/*			content		=>		The content of the new element.				*/
/*																			*/
/*	Return :																*/
/*			The new element													*/
/* ************************************************************************ */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
