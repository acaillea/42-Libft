/* ************************************************************************ */
/*	Description :															*/
/*			 The strnstr() function locates the	first occurrence of the		*/
/*				null-termi-nated string little in the string big, where 	*/
/*				not more than	len characters are searched.  Characters 	*/
/*				that appear after a `\0'	character are not searched.		*/
/*																			*/
/*	Argument :																*/
/*			big			=>	This is the main C string to be scanned.		*/
/*																			*/
/*			little		=>	This is the small string to be searched with-in */
/*								haystack string.							*/
/*																			*/
/*			len			=>	Number of elements to copy						*/
/*																			*/
/*	Return :																*/
/*			If little is an empty string, big is returned; if little occurs */
/*				nowhere in big, NULL is returned; otherwise a pointer to 	*/
/*				the first character of the first occurrence of little is 	*/
/*				returned.													*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] && len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && haystack[i + j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		else
			i++;
	}
	return (NULL);
}
