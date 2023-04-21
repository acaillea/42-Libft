/* ************************************************************************ */
/*	Description :															*/
/*			The function searches for the first occurrence of the character */
/*				to_find in the string pointed to by the argument str.		*/
/*																			*/
/*	Argument :																*/
/*			str			=>	This is the C string to be scanned.				*/
/*																			*/
/*			to_find		=>	This is the character to be searched in str.	*/
/*																			*/
/*	Return :																*/
/*			This returns a pointer to the first occurrence of the character */
/*				to_find in the string str, or NULL if the character is not 	*/
/*				found.														*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return (str);
	return (0);
}
