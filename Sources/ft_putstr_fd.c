/* ************************************************************************ */
/*	Description :															*/
/*			Write the string 's' to the file descriptor given.				*/
/*																			*/
/*	Argument :																*/
/*			str		=>		The string of characters to write.				*/
/*																			*/
/*			fd		=>		The file descriptor to write to.				*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
		return ;
	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}
