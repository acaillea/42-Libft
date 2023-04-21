/* ************************************************************************ */
/*	Description :															*/
/*			Write the character 'c' on the file descriptor given.			*/
/*																			*/
/*	Argument :																*/
/*			c		=>		The character to write.							*/
/*																			*/
/*			fd		=>		The file descriptor to write to.				*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
