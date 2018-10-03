/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlowcase.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: flfinet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:05:35 by flfinet      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:46:30 by flfinet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(char c)
{
	int	result;

	result = (int)c;
	if (c >= 'a' && c <= 'z')
	{
		result = result - 32;
		return (result);
	}
	else
		return (c);
}
