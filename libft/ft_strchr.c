/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:22:15 by akarafi           #+#    #+#             */
/*   Updated: 2021/11/07 11:49:40 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{	
		if (*s == (char) c)
			return ((char *)(s));
		s++;
	}
	if (c == *s)
		return ((char *)s);
	return (0);
}
