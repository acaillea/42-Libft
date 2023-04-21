/* ************************************************************************ */
/*	Description :															*/
/*			The function compares the first n bytes of memory area string1	*/
/*				and memory area string2.									*/
/*																			*/
/*	Argument :																*/
/*			string1		=>	This is the pointer to a block of memory.		*/
/*																			*/
/*			string2		=>	This is the pointer to a block of memory.		*/
/*																			*/
/*			size		=>	This is the number of bytes to be compared.		*/
/*																			*/
/*	Return :																*/
/*			If Return value < 0 then it indicates str1 is less than str2.	*/
/*																			*/
/*			If Return value > 0 then it indicates str2 is less than str1.	*/
/*																			*/
/*			If Return value = 0 then it indicates str1 is equal to str2.	*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < (n - 1) && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
