/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtakahas <jtakahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:08:09 by jtakahas          #+#    #+#             */
/*   Updated: 2023/09/28 13:17:46 by jtakahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int ch, size_t len)
{
	unsigned char	*c;
	size_t			n_byte;

	if (!b)
		return (NULL);
	c = (unsigned char *)b;
	n_byte = 0;
	while (n_byte < len)
		c[n_byte++] = ch;
	return (b);
}
