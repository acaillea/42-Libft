/* ************************************************************************ */
/*	Description :															*/
/*			The isdigit() function checks whether a character is numeric	*/
/*				character (0-9) or not.										*/
/*																			*/
/*	Argument :																*/
/*			Function isdigit() takes a single argument in the form of 		*/
/*				an integer and returns the value of type int.				*/
/*																			*/
/*	Return :																*/
/*			Non-zero int ( x > 0 )	=>	Argument is a numeric character.	*/
/*			Zero (0)				=>	Argument is not a numeric character.*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_isdigit(int c)
{
	return (c > 47 && c < 58);
}
