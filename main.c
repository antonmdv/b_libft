/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:05:02 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/11 21:19:32 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{

	//test strlen
	/*	
	int nm = ft_strlen(str);
	printf("Length: %d\n\n", nm);		
	*/

	//test memset
	/*
	ft_memset(str, '_', 2);
	printf("%s", str);
	*/

	//test strdup and strcpy
	/*
	char *duplicate = ft_strdup(str);
	printf("%s\n", duplicate);	
	*/

	//test strncpy
	/*
	ft_strncpy(str1,str,3);
	printf("%s\n", str1);	
	*/
	
	//test strchr
	/*
	const char str[] = "aigjagij";
	const char ch = '+';
    char *ret;
	ret = strchr(str, ch);
	printf("%s\n", ret);

	const char str1[] = "ak;jg";
	const char ch1 = '-';
    char *ret1 = ft_strchr(str1, ch1);
	printf("%s\n", ret1);
	*/
	

	//test strcmp
	/*
	char *str = "";
	char *str1 = "";

	printf("%d\n", strcmp(str,str1));
	printf("%d\n", ft_strcmp(str,str1));
	*/

	//test isdigit
	/*
	printf("%d\n",isdigit('1'));
	printf("%d\n", ft_isdigit('1'));
	*/

	//test toupper
	/*
	char *str = "Test String.\n";
	int i = 0;
	while (str[i])
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	*/

	//test tolower

	char *str = "TeSt StrIng.\n";
	int i = 0;
	while (str[i])
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	}

	return (0);
}
