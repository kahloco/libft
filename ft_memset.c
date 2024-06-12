/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:50:18 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/02 17:51:01 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	while (len > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[30] = "Hello my name is Chris";
	printf("Before memset(): %s\n", str);
	ft_memset(str + 5, '.', 3);
	memset(str + 5, '.', 3);
	printf("After ft_memset(): %s\n", str);
	printf("After memset(): %s\n", str);
	return (0);
}
*/