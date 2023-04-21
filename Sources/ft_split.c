/* ************************************************************************ */
/*	Description :															*/
/*			Allocate and return an array of strings obtained by separating 	*/
/*				's' from using the 'c' character, used as a delimiter.		*/
/*				The array must be terminated with NULL.						*/
/*																			*/
/*	Argument :																*/
/*			s	=>		The string of characters to cut.					*/
/*			c	=>		The delimiting character.							*/
/*																			*/
/*	Return :																*/
/*			The array of new strings, resulting from the splitting. 		*/
/*				NULL if the allocation fails.								*/
/* ************************************************************************ */

#include "../libft.h"

static int	ft_nb_words(char const *s, char c)
{
	int	i;
	int	nb;
	int	size;

	i = 0;
	nb = 0;
	if (s[0] == '\0')
		return (0);
	size = ft_strlen(s) - 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			nb++;
		i++;
	}
	if (s[0] == c && s[size] == c)
		nb--;
	else if (s[0] != c && s[size] != c)
		nb++;
	return (nb);
}

static int	ft_len_word(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_free(char **tab, int j)
{
	int	i;

	i = 0;
	if (!tab)
		return (NULL);
	while (i < j && tab[i] != 0)
	{
		if (tab[i])
			free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char **) * (ft_nb_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = -1;
	j = -1;
	if (s[0] != c && s[0] != '\0')
		tab[++j] = ft_substr(s, 0, ft_len_word(s, c, 0));
	while (s[++i])
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
		{
			tab[++j] = ft_substr(s, i + 1, ft_len_word(s, c, i + 1));
			if (!tab[j])
				return (ft_free(tab, j));
			i += ft_len_word(s, c, i + 1);
		}
	}
	tab[++j] = NULL;
	return (tab);
}
