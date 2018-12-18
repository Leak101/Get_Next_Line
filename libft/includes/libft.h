/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 15:50:23 by lle-bast          #+#    #+#             */
/*   Updated: 2018/11/23 12:10:04 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

void				ft_strclr(char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strnew(size_t size);

#endif
