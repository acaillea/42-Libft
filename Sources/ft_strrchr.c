/* ************************************************************************ */
/*	Description :															*/
/*			 The function searches for the last occurrence of the character */
/*				c in the string pointed to, by the argument s.				*/
/*																			*/
/*	Argument :																*/
/*			s		=>	This is the C string.								*/
/*																			*/
/*			c		=>	This is the character to be located. It is passed 	*/
/*							as its int promotion, but it is internally 		*/
/*							converted back to char.							*/
/*																			*/
/*	Return :																*/
/*			This function returns a pointer to the last occurrence of 		*/
/*				character in s. If the value is not found, the function 	*/
/*				returns a null pointer.										*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{	
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	return (NULL);
}
