/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmahamed <jmahamed@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:01:38 by jmahamed          #+#    #+#             */
/*   Updated: 2025/06/07 18:37:59 by jmahamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char c;
	
	c = 'N';
	if(n >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	} else {
		write(1, &c, 1);
	}

}

int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
