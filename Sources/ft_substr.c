/* ************************************************************************ */
/*	Description :															*/
/*			 Allocates and returns a string from the string "s. This new 	*/
/*				string begins at the index" start "and has a maximum 		*/
/*				size of" len "												*/
/*																			*/
/*	Argument :																*/
/*			s		=>	The channel from which to extract the news			*/
/*																			*/
/*			start	=>	The start index of the new string in the			*/
/*																			*/
/*			len		=>	The maximum size of the new string.					*/
/*																			*/
/*	Return :																*/
/*			The new character chain. NULL if the allocation fails.			*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		len = 0;
	if (size - start < len)
		len = size - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
