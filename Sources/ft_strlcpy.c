/* ************************************************************************ */
/*	Description :															*/
/*			strlcpy() copies up to dstsize - 1 characters from the string 	*/
/*				src to dst, NUL-terminating the result if dstsize is not 0.	*/
/*																			*/
/*	Argument :																*/
/*			dst		=>	String where 'src' will be added.					*/
/*			src		=>	String which will be added to 'dst'.				*/
/*			siz		=>	Number of byts to add to 'dst'.						*/
/*																			*/
/*	Return :																*/
/*			The length of src. If the return value is >= dstsize, the 		*/
/*				output string has been truncated. It is the caller's		*/
/*				responsibility to handle this.								*/
/* ************************************************************************ */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < ((size_t)dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
