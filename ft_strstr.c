/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: flfinet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 14:17:22 by flfinet      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:46:03 by flfinet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strverif(int i, int j, char *str, char *to_find)
{
	while (str[i])
		i++;
	while (to_find[j])
		j++;
	if (j == 0 && i == 0)
		return ("\n");
	return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_strverif(i, j, str, to_find);
	i = 0;
	if (j == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				str = str + i;
				return (str);
			}
			j++;
		}
		i++;
	}
	return (0);
}
