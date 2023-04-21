/* ************************************************************************ */
/*	Description :															*/
/*			The function compares at most the first n bytes of str1 		*/
/*				and str2.													*/
/*																			*/
/*	Argument :																*/
/*			s1	=>	This is the first string to be compared.				*/
/*																			*/
/*			s2	=>	This is the second string to be compared.				*/
/*																			*/
/*			n		=>	The maximum number of characters to be compared.	*/
/*																			*/
/*	Return :																*/
/*			if Return value < 0 then it indicates s1 is less than s2.		*/
/*																			*/
/*			if Return value > 0 then it indicates s2 is less than s1.		*/
/*																			*/
/*			if Return value = 0 then it indicates s1 is equal to s2.		*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*s1_str;
	char	*s2_str;
	size_t	i;

	s1_str = (char *)s1;
	s2_str = (char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s1_str[i] && s2_str[i] && s1_str[i] == s2_str[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1_str[i] - (unsigned char)s2_str[i]);
}
