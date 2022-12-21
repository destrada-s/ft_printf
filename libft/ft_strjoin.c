/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:37:48 by destrada          #+#    #+#             */
/*   Updated: 2022/10/04 11:16:29 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		lenjoin;

	lenjoin = ft_strlen(s1) + ft_strlen(s2);
	strjoin = (char *)ft_calloc(lenjoin + 1, sizeof(char));
	if (!strjoin)
		return (0);
	ft_strlcpy(strjoin, s1, lenjoin + 1);
	ft_strlcat(strjoin, s2, lenjoin + 1);
	return (strjoin);
}
