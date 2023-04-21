/* ************************************************************************ */
/*	Description :															*/
/*			Apply the function f to each character of the character string 	*/
/*				transmitted as an argument, and passing its index as the 	*/
/*				first argument. Each character is transmitted by address 	*/
/*				to f to be modified if necessary.							*/
/*																			*/
/*	Argument :																*/
/*			s	=>		The character string on which to iterate.			*/
/* 			f	=>		The function to apply to each character.			*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
