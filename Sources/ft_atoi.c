/* ************************************************************************	*/
/*	Description :  															*/
/*			It converts the string argument str to an integer.				*/
/*																			*/
/*	Argument :																*/
/*			This is the string representation of an integral number.		*/
/*																			*/
/*	Return :																*/
/*			This function returns the converted integral number as 			*/
/*				an int value.												*/
/*			If no valid conversion could be performed, it returns zero.		*/
/* ************************************************************************ */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long long	res;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + (str[i++] - 48);
		if (res * neg < -2147483648)
			return (0);
		if (res * neg > 2147483647)
			return (-1);
	}
	return (res * neg);
}
