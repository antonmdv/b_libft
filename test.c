/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:14:58 by knaumov           #+#    #+#             */
/*   Updated: 2018/09/11 22:53:52 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int		main()
{
	int		i;
	char	s1[40];
	char	s2[40];

	//ft_isdigit

	i = 0;
	if (ft_isdigit('0') != isdigit('0'))
	{
		printf("Error in ft_isdigit('0'), expected %d, got '%d'\n", isdigit('0'), ft_isdigit('0'));
		i = 1;
	}
	if (ft_isdigit('a') != isdigit('a'))
	{
		printf("Error in ft_isdigit('a'), expected '%d', got '%d'\n", isdigit('a'), ft_isdigit('a'));
		i = 1;
	}
	if (ft_isdigit(':') != isdigit(':'))
	{
		printf("Error in ft_isdigit(':'), expected '%d', got '%d'\n", isdigit(':'), ft_isdigit(':'));
		i = 1;
	}
	if (ft_isdigit('9') != isdigit('9'))
	{
		printf("Error in ft_isdigit('9'), expected '%d', got '%d'\n", isdigit('9'), ft_isdigit('9'));
		i = 1;
	}
	if (i == 0)
		printf("ft_isdigit: all good!\n");

	//ft_memset

	i = 0;
   char str1[50] = "GeeksForGeeks is for programming geeks.";
    char str2[50] = "GeeksForGeeks is for programming geeks.";
    
   ft_memset(str1 + 13, '.', 8*sizeof(char));
   memset(str2 + 13, '.', 8*sizeof(char));

   if (strcmp(str1,str2) != 0)
    {
		printf("Error in ft_memset, your: %s, answer: %s", str1, str2);
		i = 1;
	}
	if (i == 0)
		printf("ft_memset: all good!\n");

	//ft_strchr

	i = 0;
	if (ft_strchr("http://www.tutorialspoint.com", '.') != strchr("http://www.tutorialspoint.com", '.'))
	{
		printf("Error in ft_strchr('http://www.tutorialspoint.com', '.'), expected %s, got '%s'\n", strchr("http://www.tutorialspoint.com", '.'), ft_strchr("http://www.tutorialspoint.com", '.'));
		i = 1;
	}
	if (ft_strchr("123123", '3') != strchr("123123", '3'))
	{
		printf("Error in ft_strchr('123123', '3'), expected %s, got '%s'\n", strchr("123123",'3'), ft_strchr("123123", '3'));
		i = 1;
	}
	if (ft_strchr("123123123", ' ') != strchr("123123123", ' '))
	{
		printf("Error in ft_strchr('123123123', ' '), expected %s, got '%s'\n", strchr("123123123", ' '), ft_strchr("123123123", ' '));
		i = 1;
	}
	if (i == 0)
		printf("ft_strchr: all good!\n");

	//ft_strcmp

	i = 0;
	if (ft_strcmp("123", "123") != strcmp("123", "123"))
	{
		printf("Error in ft_strcmp(123, 123), expected '%d', got '%d'\n", strcmp("123", "123"), ft_strcmp("123", "123"));
		i = 1;
	}
	if (ft_strcmp("12", "123") != strcmp("12", "123"))
	{
		printf("Error in ft_strcmp(123, 123), expected '%d', got '%d'\n", strcmp("12", "123"), ft_strcmp("12", "123"));
		i = 1;
	}
	if (ft_strcmp("123", "13") != strcmp("123", "13"))
	{
		printf("Error in ft_strcmp(123, 123), expected '%d', got '%d'\n", strcmp("123", "13"), ft_strcmp("123", "13"));
		i = 1;
	}
	if (ft_strcmp("123", " ") != strcmp("123", " "))
	{
		printf("Error in ft_strcmp(123, 123), expected '%d', got '%d'\n", strcmp("123", " "), ft_strcmp("123", " "));
		i = 1;
	}
	if (i == 0)
		printf("ft_strcmp: all good!\n");

	//ft_strcpy

	i = 0;
	if (ft_strcpy(s1, "Final copied string") != strcpy(s1, "Final copied string"))
	{
		printf("Error in ft_strcpy(s1, 'Final copied string'), expected '%d', got '%d'\n", strcmp(s1, "Final copied string"), ft_strcmp(s1, "Final copied string"));
		i = 1;
	}
	if (ft_strcpy(s2, s1) != strcpy(s2, s1))
	{
		printf("Error in ft_strcpy(s2, s1), expected '%d', got '%d'\n", strcmp(s2, s1), ft_strcmp(s2, s1));
		i = 1;
	}
	if (i == 0)
		printf("ft_strcpy: all good!\n");

	//ft_strdup

	i = 0;
	if (strcmp(ft_strdup("Final"), strdup("Final")) != 0)
	{
		printf("Error in ft_strdup(s1, 'Final copied string'), expected '%s', got '%s'\n", strdup("Final copied string"), ft_strdup("Final copied string"));
		i = 1;
	}
	if (i == 0)
		printf("ft_strdup: all good!\n");

	//ft_strlen

	i = 0;
	if (ft_strlen("123456789") != strlen("123456789"))
	{
		printf("Error in ft_strlen(123456789), expected '%lu', got '%d'\n", strlen("123456789"), ft_strlen("123456789"));
		i = 1;
	}
	if (ft_strlen("qweasdzxc") != strlen("qweasdzxc"))
	{
		printf("Error in ft_strlen(qweasdzxc), expected '%lu', got '%d'\n", strlen("qweasdzxc"), ft_strlen("qweasdzxc"));
		i = 1;
	}
	if (ft_strlen("aaaaaaaaa") != strlen("aaaaaaaaa"))
	{
		printf("Error in ft_strlen(aaaaaaaaa), expected '%lu', got '%d'\n", strlen("aaaaaaaaa"), ft_strlen("aaaaaaaaa"));
		i = 1;
	}
	if (ft_strlen("tghnjkml;.") != strlen("tghnjkml;."))
	{
		printf("Error in ft_strlen(tghnjkml;.), expected '%lu', got '%d'\n", strlen("tghnjkml;."), ft_strlen("tghnjkml;."));
		i = 1;
	}
	if (i == 0)
		printf("ft_strlen: all good!\n");

	//ft_strncpy

	i = 0;
	if (ft_strncpy(s1, "Final copied string", 10) != strncpy(s1, "Final copied string", 10))
	{
		printf("Error in ft_strncpy(s1, 'Final copied string', 10), expected '%s', got '%s'\n", strncpy(s1, "Final copied string", 10), ft_strncpy(s1, "Final copied string", 10));
		i = 1;
	}
	if (ft_strncpy(s2, s1, 5) != strncpy(s2, s1, 5))
	{
		printf("Error in ft_strncpy(s2, s1, 5), expected '%s', got '%s'\n", strncpy(s2, s1, 5), ft_strncpy(s2, s1, 5));
		i = 1;
	}
	if (i == 0)
		printf("ft_strcpy: all good!\n");

	//ft_tolower	

	i = 0;
	if (ft_tolower('a') != tolower('a'))
	{
		printf("Error in ft_tolower('a'), expected '%c', got '%c'\n", tolower('a'), ft_tolower('a'));
		i = 1;
	}
	if (ft_tolower('Z') != tolower('Z'))
	{
		printf("Error in ft_tolower('Z'), expected '%c', got '%c'\n", tolower('Z'), ft_tolower('Z'));
		i = 1;
	}
	if (ft_tolower('3') != tolower('3'))
	{
		printf("Error in ft_tolower('3'), expected '%c', got '%c'\n", tolower('3'), ft_tolower('3'));
		i = 1;
	}
	if (ft_tolower(';') != tolower(';'))
	{
		printf("Error in ft_tolower(';'), expected '%c', got '%c'\n", tolower(';'), ft_tolower(';'));
		i = 1;
	}
	if (i == 0)
		printf("ft_tolower: all good!\n");

	//ft_toupper

	i = 0;
	if (ft_toupper('a') != toupper('a'))
	{
		printf("Error in ft_toupper('a'), expected '%c', got '%c'\n", toupper('a'), ft_toupper('a'));
		i = 1;
	}
	if (ft_toupper('Z') != toupper('Z'))
	{
		printf("Error in ft_tolower('Z'), expected '%c', got '%c'\n", toupper('Z'), ft_toupper('Z'));
		i = 1;
	}
	if (ft_toupper('3') != toupper('3'))
	{
		printf("Error in ft_tolower('3'), expected '%c', got '%c'\n", toupper('3'), ft_toupper('3'));
		i = 1;
	}
	if (ft_toupper(';') != toupper(';'))
	{
		printf("Error in ft_tolower(';'), expected '%c', got '%c'\n", toupper(';'), ft_toupper(';'));
		i = 1;
	}
	if (i == 0)
		printf("ft_toupper: all good!\n");

}
