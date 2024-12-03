/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:29:42 by upolat            #+#    #+#             */
/*   Updated: 2024/12/03 16:31:48 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H

# include "stdlib.h"
# include "unistd.h"
# include "string.h"
# include "stdbool.h"
# include "../libft.h"

typedef struct s_vec
{
	unsigned char	*memory;
	size_t			elem_size;
	size_t			alloc_size;
	size_t			len;
}					t_vec;

int		vec_new(t_vec *src, size_t init_len, size_t elem_size);
void	vec_free(t_vec *src);
int		vec_from(t_vec *dst, void *src, size_t len, size_t elem_size);
int		vec_resize(t_vec *src, size_t target_len);
int		vec_clear(t_vec *src);
int		vec_push(t_vec *src, void *elem);
int		vec_pop(void *dst, t_vec *src);
int		vec_copy(t_vec *dst, t_vec *src);
void	*vec_get(t_vec *src, size_t index);
int		vec_insert(t_vec *dst, void *elem, size_t index);
int		vec_remove(t_vec *src, size_t index);
int		vec_append(t_vec *dst, t_vec *src);
int		vec_prepend(t_vec *dst, t_vec *src);
void	vec_iter(t_vec *src, void (*f) (void *));
void	*vec_find(t_vec *src, bool (*f) (void *));
int		vec_map(t_vec *dst, t_vec *src, void (*f) (void *));
int		vec_filter(t_vec *dst, t_vec *src, bool (*f) (void *));
int		vec_reduce(void *dst, t_vec *src, void (*f) (void *, void *));
void	vec_sort(t_vec *src, int (*f)(void *, void *));
void	vec_print(t_vec *src);

#endif
