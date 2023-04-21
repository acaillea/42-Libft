/* ************************************************************************ */
/*	Description :															*/
/*			The function copies size characters from source to destination.	*/
/*																			*/
/*	Argument :																*/
/*			destination		=>	This is a pointer to the destination array 	*/
/*									where the content is to be copied, 		*/
/*									type-casted to a pointer of type void*.	*/
/*																			*/
/*			source			=>	This is a pointer to the source of data to 	*/
/*									be copied, type-casted to a pointer of 	*/
/*									type void*.								*/
/*																			*/
/*			size			=>	This is the number of bytes to be copied.	*/
/*																			*/
/*	Return :																*/
/*			This function returns a pointer to the destination.				*/
/* ************************************************************************ */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (NULL);
	i = -1;
	if (src > dst)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
