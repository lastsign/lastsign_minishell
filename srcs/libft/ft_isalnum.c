/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:03:06 by ptycho            #+#    #+#             */
/*   Updated: 2020/10/31 20:07:58 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int ch)
{
	if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) ||
	(ch >= 97 && ch <= 122))
		return (1);
	return (0);
}
