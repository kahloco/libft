/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:12:56 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/03 11:42:46 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	char lower = 'a';
	char upper = ft_toupper(lower);
	printf("Before: %c\n", lower);
	printf("After %c\n", upper);
	return (0);
}
*/
