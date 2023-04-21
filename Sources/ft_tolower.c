/* ************************************************************************ */
/*	Description :															*/
/*			 The function converts a given letter to lowercase.				*/
/*																			*/
/*	Argument :																*/
/*			c		=>	This is the letter to be converted to lowercase.	*/
/*																			*/
/*	Return :																*/
/*			This function returns lowercase equivalent to c, if such value 	*/
/*				exists, else c remains unchanged. The value is returned 	*/
/*				as an int value that can be implicitly casted to char.		*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
