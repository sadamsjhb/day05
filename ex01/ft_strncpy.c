/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:28:50 by sadams            #+#    #+#             */
/*   Updated: 2020/06/26 13:39:03 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i; 
	i = 0;

	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}
