/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:56:48 by mhiguera          #+#    #+#             */
/*   Updated: 2023/04/17 18:52:49 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;

	i = -1;
	j = -1;
	if (!s1)
	{
		s1 = malloc(sizeof (char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (s1[++i] != '\0')
		s3[i] = s1[i];
	while (s2[++j] != '\0')
		s3[i + j] = s2[j];
	s3[  ]
	free(s1);
	return (s3);
}

char    *ft_strchr(const char *s, int c)
{
    int i;
    
	i = 0;
    while (s[i] != '\0')
	{
         if (s[i] == (char)c)
             return ((char *)s + i);
         i++;
     }
     if (s[i] == (char)c)
	 return ((char *)&s[i]);
     return (NULL);
}

char *ft_ending(const char *s)
{
	int i;
	char *extra;

	while (s[i] = '\n')


	while (s[i] != '\n')
	{
		extra[i] = s[i];
		i++;
	}
	
		
}
