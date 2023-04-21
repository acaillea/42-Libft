/* ************************************************************************ */
/*	Description :															*/
/*			 Allocates and returns a copy of the string "s1", without the 	*/
/*				characters specified in "set" at the start and end of 		*/
/*				the string.													*/
/*																			*/
/*	Argument :																*/
/*			s1		=>	The string to trim.									*/
/*			set		=>	The reference set of characters to trim.			*/
/*																			*/
/*	Return :																*/
/*			The trimmed string. NULL if the allocation fails.				*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
