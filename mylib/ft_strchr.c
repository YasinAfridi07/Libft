/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:04:09 by yusman            #+#    #+#             */
/*   Updated: 2022/12/16 18:31:14 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *) s;
	while (*a != (char) c)
	{
		if (!*a)
			return (0);
		a++;
	}
	return (a);
}

// int main ()
// {
// 		char i[] = "hello";
// 		printf("%s", ft_strchr("hello", 'l'));
