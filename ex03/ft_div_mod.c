/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:42:08 by budayima          #+#    #+#             */
/*   Updated: 2020/07/13 13:21:56 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_div_mod(int a, int b, int *div, int*mod)
{
	*div = (a / b);
	*mod = (a % b);
}
