/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: flfinet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:08 by flfinet      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:37:04 by flfinet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'a' || c <= 'z') && (c >= 'A' || c <= 'Z'))
		return (1);
	else
		return (0);
}
