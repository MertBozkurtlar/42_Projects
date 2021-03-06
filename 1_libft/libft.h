/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozkurt <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:18:29 by mbozkurt          #+#    #+#             */
/*   Updated: 2022/01/03 15:35:32 by mbozkurt         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
unsigned int ft_strlen(const char *s);
char *ft_memset(char *b, int c, unsigned int len);
void ft_bzero(void *b, unsigned int len);

#endif
