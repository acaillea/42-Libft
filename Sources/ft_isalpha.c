/* ************************************************************************ */
/*	Description :															*/
/*			The isalpha() function checks whether a character 				*/
/*				is an alphabet or not.										*/
/*																			*/
/*	Argument :																*/
/*			Function isalpha() takes a single argument in the form 			*/
/*				of an integer value.										*/
/*																			*/
/*	Return :																*/
/*			If a character passed to isalpha() is an alphabet, 				*/
/*				it returns a non-zero integer								*/
/*			If not it returns 0.											*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
