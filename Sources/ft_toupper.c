/* ************************************************************************ */
/*	Description :															*/
/*			 The function converts lowercase letter to uppercase.			*/
/*																			*/
/*	Argument :																*/
/*			c		=>	This is the letter to be converted to uppercase.	*/
/*																			*/
/*	Return :																*/
/*			This function returns uppercase equivalent to c, if such value 	*/
/*				exists, else c remains unchanged. The value is returned 	*/
/*				as an int value that can be implicitly casted to char.		*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
