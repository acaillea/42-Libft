/* ************************************************************************ */
/*	Description :															*/
/*			The isprint() function checks whether a character is			*/
/*				a printable character or not.								*/
/*																			*/
/*	Argument :																*/
/*			Function isprint() takes a single argument in the form of 		*/
/*				an integer.													*/
/*																			*/
/*	Return :																*/
/*			If a character passed to isprint() is a printable character		*/
/*				it returns non-zero integer, if not it returns 0.			*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
