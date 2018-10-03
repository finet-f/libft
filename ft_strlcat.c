/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: flfinet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 20:27:32 by flfinet      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:40:31 by flfinet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	nb;

	if (!dest || !src)
		return (0);
	i = 0;
	j = 0;
	nb = ft_strlen(src);
	while (dest[i] && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
		{
			dest[i++] = src[j++];
		}
	}
	if (j > 0)
	{
		dest[i] = '\0';
		return (nb + i - j);
	}
	return (nb + i);
}
