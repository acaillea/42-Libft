/* ************************************************************************ */
/*	Description :															*/
/*			Writes the string 's' to the given file descriptor, followed	*/
/*				by a newline.												*/
/*																			*/
/*	Argument :																*/
/*			s		=>		The string of characters to write.				*/
/*																			*/
/*			fd		=>		The file descriptor to write to.				*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
