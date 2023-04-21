/* ************************************************************************ */
/*	Description :															*/
/*			Allocate and return a new string, the result of the 			*/
/*				concatenation of s1 and s2.									*/
/*																			*/
/*	Argument :																*/
/*			s1		=>	The prefix character string.						*/
/*			s2		=>	The suffixed character string.						*/
/*																			*/
/*	Return :																*/
/*			The new string of characters. NULL if the allocation fails.		*/
/* ************************************************************************ */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!s3)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++j])
		s3[++i] = s1[j];
	j = -1;
	while (s2[++j])
		s3[++i] = s2[j];
	s3[i + 1] = '\0';
	return (s3);
}
