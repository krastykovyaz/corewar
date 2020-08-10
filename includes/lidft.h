/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lidft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 20:10:42 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/10 19:45:02 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
    
# include <unistd.h>
# include <stdio.h>

size_t				ft_strlen(const char *s);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memset(void *ptr, int c, size_t bytes);
int		ft_strequ(const char *s1, const char *s2);
__int64_t	ft_atoi(const char *s);
int	ft_strcmp(const char *s1, const char *s2);
int ft_isdigit(char c);
void ft_swap(t_player *a, t_player *b);
void	ft_putnbr(int nb);
void	ft_putstr(const char *s);
void	ft_putchar(char c);
void free_data(t_vm *vm);





#endif