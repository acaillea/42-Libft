/* ************************************************************************ */
/*	Description :															*/
/*			The function copies the character value to the first count 		*/
/*				characters of the string pointed to, by the argument 		*/
/*				pointer.													*/
/*																			*/
/*	Argument :																*/
/*			pointer		=>	This is a pointer to the block of memory to fill*/
/*																			*/
/*			value		=>	This is the value to be set. The value is passed*/
/*			 					as an int, but the function fills the block */
/*								of memory using the unsigned char conversion*/
/*								of this value.								*/
/*																			*/
/*			count		=>	This is the number of bytes to be set to the 	*/
/*								value.										*/
/*																			*/
/*	Return :																*/
/*			This function returns a pointer to the memory area pointer.		*/
/* ************************************************************************ */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
