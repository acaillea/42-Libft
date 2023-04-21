/* ************************************************************************ */
/*	Description :															*/
/*			The strdup() function returns a pointer to a new string which 	*/
/*				is a duplicate of the string s. Memory for the new string 	*/
/*				is obtained with malloc.									*/
/*																			*/
/*	Argument :																*/
/*			src		=>	pointer to the null-terminated byte string to 		*/
/*							duplicate.										*/
/*																			*/
/*	Return :																*/
/*			A pointer to the newly allocated string, or a null pointer if 	*/
/*				an error occurred.											*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	i;

	cpy = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
