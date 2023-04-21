/* ************************************************************************ */
/*	Description :															*/
/*			The function computes the length of the string str up to, but 	*/
/*				not including the terminating null character.				*/
/*																			*/
/*	Argument :																*/
/*			str		=>	This is the string whose length is to be found.		*/
/*																			*/
/*	Return :																*/
/*			This function returns the length of string.						*/
/* ************************************************************************ */

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
