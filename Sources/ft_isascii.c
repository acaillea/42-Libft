/* ************************************************************************ */
/*	Description :															*/
/*			The isascii() function tests if a given character can be 		*/
/*				represented as a valid 7–bit US-ASCII character.			*/
/*																			*/
/*	Argument :																*/
/*			Function isalpha() takes a single argument in the form			*/
/*				of an integer value.										*/
/*																			*/
/*	Return :																*/
/*			The isascii() function returns nonzero if can be represented	*/
/*				as a character in the 7–bit US-ASCII character set.			*/
/*			Otherwise, it returns 0.										*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
