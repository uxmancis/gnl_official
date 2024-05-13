/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:44:28 by uxmancis          #+#    #+#             */
/*   Updated: 2023/07/21 20:20:51 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>//Library used for function(s): open
# include <stdio.h>//Library used for function(s): printf
# include <unistd.h>//Library used for function(s): close, read
# include <stdlib.h>//Library used for function(s): malloc, exit

//file: get_next_line.c
int		ft_read(int fd, char **buffer);
void	ft_join(char ***holder, char *buffer);
void	ft_gnl_and_update_holder(char **holder, int index_lb, char **next_line);
int		ft_read_and_go(int fd, char **holder, char *buffer, char **next_line);
char	*get_next_line(int fd);

//file: get_next_line_utils.c
char	*ft_join2(int new_l_hol, char *holder, int l_hol, char *buffer);
int		ft_lb_l(char *str, char c, int ind);
char	*ft_cp_f(char *src, char *dst, int size, int ind);
char	*ft_free2fill(char ***src, char *dst);
int		check_lb(char *holder, int len_holder);

#endif