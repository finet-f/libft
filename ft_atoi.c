/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: elgrusko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 09:50:09 by elgrusko     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:36:14 by flfinet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int i;
	int is_neg;
	int result;

	result = 0;
	is_neg = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
	|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		is_neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	if (is_neg)
		return (-result);
	return (result);
}
