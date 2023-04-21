/* ************************************************************************ */
/*	Description :															*/
/*			The function copies size characters from memory area source to 	*/
/*				memory area destination.									*/
/*																			*/
/*	Argument :																*/
/*			destination		=>	This is pointer to the destination array 	*/
/*									where the content is to be copied, 		*/
/*									type-casted to a pointer of type void*.	*/
/*																			*/
/*			source			=>	This is pointer to the source of data to be */
/*									copied, type-casted to a pointer of 	*/
/*									type void*.								*/
/*																			*/
/*			size			=>	This is the number of bytes to be copied.	*/
/*																			*/
/*	Return :																*/
/*			This function returns a pointer to destination.					*/
/* ************************************************************************ */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (src == dst)
		return (dst);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
