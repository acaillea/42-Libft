/* ************************************************************************ */
/*	Description :															*/
/*			The isalnum() function checks whether the argument passed 		*/
/*				is an alphanumeric character (alphabet or number) or not.	*/
/*																			*/
/*	Argument :																*/
/*			c		=>	a character											*/
/*																			*/
/*	Return :																*/
/*			Returns 1 if argument is an alphanumeric character.				*/
/*			Returns 0 if argument is neither an alphabet nor a digit.		*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
