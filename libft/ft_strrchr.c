/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:43:53 by akarafi           #+#    #+#             */
/*   Updated: 2021/11/07 11:50:10 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = s;
	while (*s)
		s++;
	while (s != p - 1)
	{	
		if (*(s) == (char) c)
			return ((char *)(s));
		s--;
	}
	return (0);
}
