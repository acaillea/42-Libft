/* ************************************************************************ */
/*	Description :															*/
/*			The bzero() function erases the data in the n bytes				*/
/*				of the memory starting at the location pointed,				*/
/*				by writing zeros ('\0') to that area.						*/
/*																			*/
/*	Argument :																*/
/*			pointer		=>	Points to a buffer that zeros are copied into.	*/
/*																			*/
/*			count		=>	Is the number of zeros to be copied into 		*/
/*								the buffer.									*/
/*																			*/
/*	Return :																*/
/*			None.															*/
/* ************************************************************************ */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}
