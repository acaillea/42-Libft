/* ************************************************************************ */
/*	Description :															*/
/*			The itoa() function constructs a string representation of 		*/
/*				an integer.													*/
/*																			*/
/*	Argument :																*/
/*			value 	=>	Is the integer to be converted to string 			*/
/*							representation.									*/
/*																			*/
/*	Return :																*/
/*			The function itoa() always returns the value string.			*/
/*				There is no error return.									*/
/* ************************************************************************ */

#include "../libft.h"

static int	ft_len_int(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (ft_len_int(n) + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = 48;
	i = ft_len_int(n);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	while (n > 0)
	{
		i--;
		str[i] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
