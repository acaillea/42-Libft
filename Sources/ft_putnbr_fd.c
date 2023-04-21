/* ************************************************************************ */
/*	Description :															*/
/*			Write the int 'n' to the given file descriptor.					*/
/*																			*/
/*	Argument :																*/
/*			n		=>		The integer to write.							*/
/*																			*/
/*			fd		=>		The file descriptor to write to.				*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	div;
	int	mod;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		n *= -1;
	}
	div = n / 10;
	mod = n % 10;
	if (div != 0)
		ft_putnbr_fd(div, fd);
	ft_putchar_fd(mod + 48, fd);
}
