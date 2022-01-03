/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozkurt <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:42:51 by mbozkurt          #+#    #+#             */
/*   Updated: 2022/01/03 15:35:01 by mbozkurt         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 127)
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}