/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 20:04:33 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/18 02:13:31 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char		*ft_strcpyg(char *dest, char *src);
char		*ft_strcatg(char *dest, char *src);
char		*ft_strjoing(char const *s1, char const *s2);
char		*ft_substrg(char *s, unsigned int start, size_t len);
int			get_next_line(int fd, char **line);
size_t		ft_strleng(const char *s);
char		*ft_read_file(char *str, int fd);
int			ft_strchrn(char *str);
char		*ft_strdupg(const char *src);
int			ft_until_n(char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 12
# endif

#endif
