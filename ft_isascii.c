/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:19:07 by ckakoz            #+#    #+#             */
/*   Updated: 2023/12/11 14:43:47 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isascii('!'));
	printf("%d\n", ft_isascii('h'));
	printf("%d\n", ft_isascii('NULL'));
	return (0);
}
*/
