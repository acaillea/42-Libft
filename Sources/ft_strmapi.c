/* ************************************************************************ */
/*	Description :															*/
/*			Apply the function 'f' to each character of the character 		*/
/*				string passed in argument to create a new string of 		*/
/*				characters resulting from successive applications of "f".	*/
/*																			*/
/*	Argument :																*/
/*			s		=>	The character string to iterate over				*/
/*			f		=>	The function to apply to each character.			*/
/*																			*/
/*	Return :																*/
/*			The character string resulting from the applications successive */
/*				of f. Returns NULL if the allocation failed.				*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
