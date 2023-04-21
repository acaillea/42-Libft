/* ************************************************************************ */
/*	Description :															*/
/*			Allocates memory for an array of num objects of size			*/
/*				and initializes all bytes in the allocated storage to zero.	*/
/*																			*/
/*	Argument :																*/
/*			count	=>	number of objects									*/
/*			size	=>	size of each object									*/
/*																			*/
/*	Return :																*/
/*			On success, returns the pointer to the beginning of newly		*/
/*				allocated memory. To avoid a memory leak, 					*/
/*				the returned pointer must be deallocated with free() 		*/
/*				or realloc().												*/
/*			On failure, returns a null pointer.								*/
/* ************************************************************************ */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	tab = malloc(size * count);
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}
