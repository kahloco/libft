/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:24:45 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/03 11:45:46 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	char c = 'Z';
	char lower = ft_tolower(c);
	printf("Before: %c\n", c);
	printf("After %c\n", lower);
	return (0);
}
*/
