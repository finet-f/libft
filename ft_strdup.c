/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: flfinet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 11:01:01 by flfinet      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:39:41 by flfinet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(*dest) * (i));
	if (dest == 0)
		return (0);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
  char *st;

  st = ft_strdup("Bonjour");
}
