/* ************************************************************************ */
/*	Description :															*/
/*			strlcat() appends string src to the end of dst. It will append	*/
/*				at most dstsize - strlen(dst) - 1 characters. It will then	*/
/*				NUL-terminate, unless dstsize is 0 or the original dst		*/
/*				string was longer than dstsize.								*/
/*																			*/
/*	Argument :																*/
/*			dst		=>	String where 'src' will be added.					*/
/*			src		=>	String which will be added to 'dst'.				*/
/*			siz		=>	Number of byts to add to 'dst'.						*/
/*																			*/
/*	Return :																*/
/*			The initial length of dst and the length of src. If the return 	*/
/*				value is >= dstsize, the output string has been truncated. 	*/
/*				It is the caller's responsibility to handle this.			*/
/* ************************************************************************ */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst || dstsize == 0)
		return (len_src + dstsize);
	i = 0;
	while (src[i] && ((len_dst + i) < (dstsize - 1)))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
