/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: flfinet <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 17:26:32 by flfinet      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 18:05:55 by flfinet     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define LIBFT_H_

#include <stdlib.h>

int				ft_atoi(char *str);
int				ft_isalnum(char c);
int				ft_isalpha(char c);
int				ft_isascii(int c);
int				ft_isdigit(char c);
int				ft_isprint(char c);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(const char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strncat(char *dest, char *src, int nb);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_strlen(char *str);
char			*ft_strrchr(const char *s, int c);
char			*ft_strverif(int i, int j, char *str, char *to_find);
char			*ft_strstr(char *str, char *to_find);
int				ft_tolower(char c);
int				ft_toupper(char c);

#endif /* LIBFT_H_ */
