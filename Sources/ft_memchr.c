/* ************************************************************************ */
/*	Description :															*/
/*			The function searches for the first occurrence of the character */
/*				c in the first n bytes of the string pointed to by 			*/
/*				the argument s.												*/
/*																			*/
/*	Argument :																*/
/*			s	=>		This is the pointer to the block of memory where 	*/
/*							the search is performed.						*/
/*																			*/
/*			c	=>		This is the value to be passed as an int, 			*/
/*							but the function performs a byte per byte 		*/
/*							search using the unsigned char conversion 		*/
/*							of this value.									*/
/*																			*/
/*			n	=>		This is the number of bytes to be analyzed.			*/
/*																			*/
/*	Return :																*/
/*			This function returns a pointer to the matching byte or NULL 	*/
/*				if the character does not occur in the given memory area.	*/
/* ************************************************************************ */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	while (i < (int)n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
